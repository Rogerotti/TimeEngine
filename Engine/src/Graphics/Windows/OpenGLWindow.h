#pragma once
#include "IWindow.h"
#include <glew.h>
#include <glfw3.h>
#include <iostream>

namespace Core { namespace Graphic { namespace OpenGL
{
	// Okno g³ówne wykorzystuj¹ce OpenGl.
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
		// Ustawia podstawowe wartoœci okna
		void setWindowGeneralSettings();
		static friend void windowResizeCallback(GLFWwindow* window, int width, int height);
		GLFWwindow* m_window;
	};
}}}