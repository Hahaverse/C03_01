//2023111359 �ְ���
//RectangleApp.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle r1;

    r1.setHeight(3);
    r1.setWidth(7);

    cout << "Width = " << r1.getWidth() << endl;
    cout << "Height = " << r1.getHeight() << endl;
    cout << "Area = " << r1.getArea() << endl << endl;
    return 0;
}