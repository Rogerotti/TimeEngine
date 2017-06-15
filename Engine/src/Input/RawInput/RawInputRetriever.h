#pragma once
#include <vector>
#include "../RawInputButtons.h"
#include "../Mapper/InputMapper.h"
#include <Windows.h>
#include <glfw3.h>
namespace Core {
	namespace Input {
			class RawInputRetriever
			{
			public:
				void initialize(HWND window, InputMapper mapper);
				void update();
				RawInputRetriever();
				~RawInputRetriever();
			protected:
				BYTE* m_currentButtonsState;
				BYTE* m_previousButtonState;
				InputMapper mapper;
			private:
				static friend LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam); // TODO zrob ic zeby tam bindowaæ
			};
		}
}