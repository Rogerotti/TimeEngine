#pragma once
#include "IWindow.h"
#include <glew.h>
#include <glfw3.h>
#include <iostream>

namespace Core { namespace Graphic { namespace OpenGL
{
	// Okno g��wne wykorzystuj�ce OpenGl.
	class OpenGLWindow : IWindow
	{
	public:
		virtual void initialize();
		virtual void clear() const;
		virtual void update();
		virtual bool shouldWindowClose() const;
		OpenGLWindow(char* title, int width, int height);
		~OpenGLWindow();
	private:
		// Ustawia podstawowe warto�ci okna
		void setWindowGeneralSettings();
		GLFWwindow* m_window;
	};
}}}