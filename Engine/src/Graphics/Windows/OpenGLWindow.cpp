#pragma once
#include "OpenGLWindow.h"
namespace Core { namespace Graphic { namespace OpenGL
{
	void windowResizeCallback(GLFWwindow* window, int width, int height);

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

		setWindowGeneralSettings();
		glfwSetWindowSizeCallback(m_window, windowResizeCallback);
	}

	void OpenGLWindow::clear() const
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}
	
	void OpenGLWindow::update()
	{
		glfwSwapBuffers(m_window);
		glfwGetFramebufferSize(m_window, &m_width, &m_height);
		glfwPollEvents();
	}

	bool OpenGLWindow::shouldWindowClose() const
	{
		return glfwWindowShouldClose(m_window) == 1;
	}

	void OpenGLWindow::setWindowGeneralSettings()
	{
		glfwWindowHint(GLFW_RESIZABLE, 1);
		glfwWindowHint(GLFW_FOCUSED, 1);
	}

	OpenGLWindow::OpenGLWindow(char* title, int width, int height) 
		: IWindow(title, width, height){}

	OpenGLWindow::~OpenGLWindow()
	{
		glfwTerminate();
		glfwDestroyWindow(m_window);
	}

	void windowResizeCallback(GLFWwindow* window, int width, int height)
	{
		glViewport(0, 0, width, height);
	}

}}}