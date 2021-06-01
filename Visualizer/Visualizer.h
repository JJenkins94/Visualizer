#pragma once

#include <Windows.h>


class Visualizer
{

public:
	Visualizer();
	~Visualizer();
	void drawCos();
	void drawColumn(int location, int height);

private:
	HWND consoleHandle;
	HDC deviceContext;
};

