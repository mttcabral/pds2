#include <iostream>
#include "Circle.hpp"
#include <cmath>

Circle::Circle() : _circleRadius(0) { this->setCenterPoint(Point(0, 0)); }
Circle::Circle(int xCoordinate, int yCoordinate, int circleRadius) : _circleRadius(circleRadius) { this->setCenterPoint(Point(xCoordinate, yCoordinate)); }

int Circle::getCircleRadius() { return _circleRadius; }
void Circle::setCircleRadius(int circleRadius) { _circleRadius = circleRadius; }

void Circle::draw() { std::cout << _centerPoint.getXCoordinate() << ' ' << _centerPoint.getYCoordinate() << " CIRCULO" << std::endl; }
double Circle::area() { return (M_PI * (_circleRadius * _circleRadius)); }