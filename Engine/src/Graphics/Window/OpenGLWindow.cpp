#pragma once
#include "OpenGLWindow.h"
namespace Core { namespace Graphic { namespace OpenGL 
{
	void OpenGLWindow::initialize()
	{
		if (!glfwInit())
			std::cout << "Error initializing OpenGl Window because of glfw3 library." << std::endl;

		m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);

		if (!m_window)
		{
			glfwTerminate();
			std::cout << "Error initializing OpenGl Window because of glfw3 library." << std::endl;
			return;
		}

		glfwMakeContextCurrent(m_window);

		GLenum err = glewInit();
		if (GLEW_OK != err)
			std::cout << "Error initializing OpenGl Window because of glew library." << std::endl;
	}

	void OpenGLWindow::clear()
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}

	void OpenGLWindow::update() const
	{
		glfwSwapBuffers(m_window);
		glfwPollEvents();
	}

	bool OpenGLWindow::shouldWindowClose() const
	{
		return glfwWindowShouldClose(m_window) == 1;
	}

	OpenGLWindow::OpenGLWindow(char* title, int width, int height) : Window(title, width, height)
	{
	}

	OpenGLWindow::~OpenGLWindow()
	{
		glfwTerminate();
	}
}}}