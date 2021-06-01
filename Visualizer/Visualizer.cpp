#include "Visualizer.h"
#include <windows.h>
#include <math.h>
#include<iostream>

#define PI 3.14

Visualizer::Visualizer() {
    //Get a console handle
    consoleHandle = GetConsoleWindow();
    //Get a handle to device context
    deviceContext = GetDC(consoleHandle);
   
}

Visualizer::~Visualizer() {
    ReleaseDC(consoleHandle, deviceContext);

}

void Visualizer::drawColumn(int location, int height) {
    COLORREF COLOR = RGB(255,255,255);

    //Draw pixels
    for (int pixel = 0; pixel < height ; pixel++)
    {
        SetPixel(deviceContext, location, pixel, COLOR);

    }

}


void Visualizer::drawCos() {
    int pixel = 0;

    //Choose any color
    COLORREF COLOR = RGB(255, 255, 255);

    //Draw pixels
    for (double i = 0; i < PI * 4; i += 0.05)
    {
        SetPixel(deviceContext, pixel, (int)(50 + 25 * cos(i)), COLOR);
        pixel += 1;
    }

}