// Visualizer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Visualizer.h"
#include <iostream>

using namespace std;

int main()
{
    Visualizer visu;

    visu.drawCos();
    
    visu.drawColumn(80, 60);

    visu.drawColumn(90, 100);
    
    cin.ignore();
    return 0;
}