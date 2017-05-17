#pragma once
#include <glew.h>
#include <glfw3.h>
#include <iostream>
namespace Core { namespace Graphic
{
	class  Window
	{
	public:
		virtual void initialize() = 0;
		virtual void update() const = 0;
		virtual void clear() = 0;
		virtual bool shouldWindowClose() const = 0;
		Window(char* title, int width, int height);
		virtual ~Window() {}

	protected:
		char* m_title;
		int m_width;
		int m_height;
		int m_isOpen;
	};	
}}

