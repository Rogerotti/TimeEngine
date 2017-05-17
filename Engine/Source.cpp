#include"src\Graphics\Windows\OpenGLWindow.h"
int main()
{
	using namespace Core;
	using namespace Graphic;
	using namespace OpenGL;
	OpenGLWindow window("Time travel", 960, 540);
	window.initialize();
	while (!window.shouldWindowClose())
	{
		window.clear();
		GLuint vao;
		glClearColor(0.55f, 0.1f, 0.1f,0.0f);
		glGenVertexArrays(1, &vao);
		glBindVertexArray(vao);
		/* 
		glBegin(GL_TRIANGLES);
		glVertex2d(-0.5f, 0);
		glVertex2d(0.0f, 0.5f);
		glVertex2d(0.5f, 0.0f);
		glEnd();
		*/
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
	}
	return 0;
}
