#include"src\Graphics\Window\OpenGLWindow.h"
int main()
{
	using namespace Core;
	using namespace Graphic;
	using namespace OpenGL;
	OpenGLWindow window("test", 800, 600);
	window.initialize();
	while (!window.shouldWindowClose())
	{
		window.clear();
		window.update();
	}
	//start
	int a = 5;
	return 0;
}
