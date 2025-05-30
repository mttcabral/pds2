#ifndef GEOMETRIC_SHAPE_H
#define GEOMETRIC_SHAPE_H

#include "Point.hpp"

class GeometricShape
{
protected:
    Point _centerPoint;

public:
    GeometricShape();
    GeometricShape(int);
    GeometricShape(int, int);

    Point getCenterPoint();
    void setCenterPoint(Point);

    void virtual draw();
    double virtual area() = 0;
};

#endif