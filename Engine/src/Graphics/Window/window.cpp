#include "window.h"

namespace Core { namespace Graphic
{
	Window::Window(char* title, int width, int height)
	{
		m_title = title;
		m_height = height;
		m_width = width;
	}
}}

