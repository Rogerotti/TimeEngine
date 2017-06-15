#include "RawInputRetriever.h"
#include <iostream>
namespace Core {
	namespace Input {
			//LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

			RawInputRetriever::RawInputRetriever()
			{
			}

			void RawInputRetriever::initialize(HWND window, InputMapper mapper)
			{
				RawInputRetriever::mapper = mapper;
				m_currentButtonsState = new BYTE[256];
				m_previousButtonState = new BYTE[256];

				RAWINPUTDEVICE device[1];
				// Rejestracja na obs³ugê zdarzeñ klawiatury.
				device[0].usUsagePage = 1;
				device[0].usUsage = 6;
				device[0].dwFlags = 0;
				device[0].hwndTarget = NULL;

				// Rejestracja na obs³ugê zdarzeñ myszki
				//device[0].usUsagePage = 1;
				//device[0].usUsage = 2;
				//device[0].dwFlags = 0; 
				//device[0].hwndTarget = NULL;


				if (RegisterRawInputDevices(device, 1, sizeof(device[0])) == FALSE) {
					std::cout<<"RegisterRawInputDevicesFailed" << std::endl;
				}
				SetWindowLongPtr(window, GWL_WNDPROC, (long)WindowProcedure);
				SetWindowLongPtr(window, GWLP_USERDATA, (long)&mapper);
			}

			void RawInputRetriever::update()
			{	
				//RawInputRetriever::mapper.BindKey()
			}

			RawInputRetriever::~RawInputRetriever()
			{
				delete m_currentButtonsState;
				delete m_previousButtonState;
			}

			static LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
			{
				switch (uMsg) {
				case WM_INPUT:
				{
					UINT dwSize;
					if (GetRawInputData((HRAWINPUT)lParam,
						RID_INPUT, NULL, &dwSize, sizeof(RAWINPUTHEADER)) == -1) {
						break;
					}
					LPBYTE lpb = new BYTE[dwSize];
					if (GetRawInputData((HRAWINPUT)lParam,
						RID_INPUT, lpb, &dwSize, sizeof(RAWINPUTHEADER)) != dwSize) {
						delete[] lpb;
						break;
					}
					PRAWINPUT raw = (PRAWINPUT)lpb;
					UINT Event = raw->data.keyboard.Message;
					char keyChar = MapVirtualKey(raw->data.keyboard.VKey, MAPVK_VK_TO_CHAR);
					delete[] lpb; // free this now
					if (Event == WM_KEYUP) {
						InputMapper* mapper = reinterpret_cast<InputMapper*>(GetWindowLongPtr(hWnd, GWLP_USERDATA));
						mapper->BindKey(static_cast<RawInputButtons>(keyChar), KeyState::Up);
					}
					if (Event == WM_KEYDOWN) {
						SHORT tabKeyState = GetAsyncKeyState(keyChar);
						// Test high bit - if set, key was down when GetAsyncKeyState was called.
						if ((1 << 15) & tabKeyState)
						{
							InputMapper* mapper = reinterpret_cast<InputMapper*>(GetWindowLongPtr(hWnd, GWLP_USERDATA));
							mapper->BindKey(static_cast<RawInputButtons>(keyChar), KeyState::Down);
						}
					}
				}
				default:
					return DefWindowProc(hWnd, uMsg, wParam, lParam);
					break;
				}
				return 0;
			}
		}
	}