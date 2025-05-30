#ifndef CIRCLE_H
#define CIRCLE_H

#include "GeometricShape.hpp"

class Circle : public GeometricShape
{
private:
    int _circleRadius;

public:
    Circle();
    Circle(int, int, int);

    int getCircleRadius();
    void setCircleRadius(int);

    void draw() override;
    double area() override;
};

#endif