#include "IWindow.h"

namespace Core { namespace Graphic
{
	IWindow::IWindow(char* title, const int width, const int height):
		m_title(title),
		m_width(width),
		m_height(height)
	{}
}}

