#pragma once
#include "window.h"

namespace Core { namespace Graphic { namespace OpenGL
	{
		class OpenGLWindow : Window
		{
		public:
			virtual void initialize();
			virtual void clear();
			virtual void update() const;
			virtual bool shouldWindowClose() const;
			OpenGLWindow(char* title, int width, int height);
			~OpenGLWindow();
		private:
			GLFWwindow* m_window;
		};

	}
}
}