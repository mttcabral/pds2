#include <iostream>
#include "GeometricShape.hpp"

GeometricShape::GeometricShape() : _centerPoint(0) {}
GeometricShape::GeometricShape(int xYCoordinate) : _centerPoint(xYCoordinate) {}
GeometricShape::GeometricShape(int xCoordinate, int yCoordinate) : _centerPoint(xCoordinate, yCoordinate) {}

Point GeometricShape::getCenterPoint() { return _centerPoint; }
void GeometricShape::setCenterPoint(Point centerPoint) { this->_centerPoint = centerPoint; }

void GeometricShape::draw() { std::cout << _centerPoint.getXCoordinate() << ' ' << _centerPoint.getYCoordinate() << std::endl; }