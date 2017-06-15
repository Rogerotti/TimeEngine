#pragma once
#include <Windows.h>
namespace Core { namespace Graphic
{
	// Interfejs okna g³ównego.
	class  IWindow
	{
	public:
		HWND m_windowHandler;
		virtual void initialize() = 0;
		virtual void update() = 0;
		virtual void clear() const = 0;
		virtual bool shouldWindowClose() const = 0;
		IWindow(char* title, const int width, const int height);
		virtual ~IWindow() {}
	protected:
		char* m_title;
		int m_width;
		int m_height;
		int m_isOpen;
	};	
}}

