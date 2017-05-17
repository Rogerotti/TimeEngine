#include "IWindow.h"

namespace Core { namespace Graphic
{
	IWindow::IWindow(char* title, int width, int height)
	{
		m_title = title;
		m_height = height;
		m_width = width;
	}
}}

