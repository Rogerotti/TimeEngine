#include"src\Graphics\Windows\OpenGLWindow.h"
#include"src\Graphics\Windows\IWindow.h"
#include"src\Input\RawInput\RawInputRetriever.h"
#include<Windows.h>
int main()
{
	using namespace Core;
	using namespace Graphic;
	using namespace OpenGL;
	using namespace Input;
	RawInputRetriever* retriver = new RawInputRetriever();
	//OpenGLWindow window("Time travel", 960, 540);
	IWindow* window = new OpenGLWindow("Time travel", 960, 540);
	window->initialize();
	InputMapper* mapper = new InputMapper();
	retriver->initialize(window->m_windowHandler, *mapper);

	while (!window->shouldWindowClose())
	{
		window->clear();
		//GLuint vao;
		glClearColor(0.55f, 0.1f, 0.1f,0.0f);
		retriver->update();
		//glGenVertexArrays(1, &vao);
		//glBindVertexArray(vao);
		
		glBegin(GL_TRIANGLES);
		glVertex2d(-0.5f, 0);
		glVertex2d(0.0f, 0.5f);
		glVertex2d(0.5f, 0.0f);
		glEnd();
		
	//	glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window->update();
	}
	return 0;
}
