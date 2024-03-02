//Rectangle.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

void Rectangle::setHeight(int h) { height = h; }
void Rectangle::setWidth(int w) { width = w; }
int Rectangle::getHeight() { return height; }
int Rectangle::getWidth() { return width; }
int Rectangle::getArea() { return width * height; }