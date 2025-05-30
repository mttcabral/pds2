#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "GeometricShape.hpp"

class Triangle : public GeometricShape
{
private:
    int _triangleBase;
    int _triangleHeight;

public:
    Triangle();
    Triangle(int, int, int, int);

    int getTriangleBase();
    int getTriangleHeight();
    void setTriangleBase(int);
    void setTriangleHeight(int);

    void draw() override;
    double area() override;
};

#endif