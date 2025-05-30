#include <iostream>
#include "Triangle.hpp"

Triangle::Triangle() : _triangleBase(0), _triangleHeight(0) { this->setCenterPoint(Point(0, 0)); }
Triangle::Triangle(int xCoordinate, int yCoordinate, int triangleBase, int triangleHeight) : _triangleBase(triangleBase), _triangleHeight(triangleHeight) { this->setCenterPoint(Point(xCoordinate, yCoordinate)); }

int Triangle::getTriangleBase() { return _triangleBase; }
int Triangle::getTriangleHeight() { return _triangleHeight; }
void Triangle::setTriangleBase(int triangleBase) { _triangleBase = triangleBase; }
void Triangle::setTriangleHeight(int triangleHeight) { _triangleHeight = triangleHeight; }

void Triangle::draw() { std::cout << _centerPoint.getXCoordinate() << ' ' << _centerPoint.getYCoordinate() << " TRIANGULO" << std::endl; }
double Triangle::area() { return ((_triangleBase * _triangleHeight) / 2.0); }