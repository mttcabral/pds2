#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "GeometricShape.hpp"

class Rectangle : public GeometricShape
{
private:
    int _rectangleSideA;
    int _rectangleSideB;

public:
    Rectangle();
    Rectangle(int, int, int, int);

    int getRectangleSideA();
    int getRectangleSideB();
    void setRectangleSideA(int);
    void setRectangleSideB(int);

    void draw() override;
    double area() override;
};

#endif