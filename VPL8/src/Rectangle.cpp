#include <iostream>
#include "Rectangle.hpp"
Rectangle::Rectangle() : _rectangleSideA(0), _rectangleSideB(0) { this->setCenterPoint(Point(0, 0)); }
Rectangle::Rectangle(int xCoordinate, int yCoordinate, int rectangleSideA, int rectangleSideB) : _rectangleSideA(rectangleSideA), _rectangleSideB(rectangleSideB) { this->setCenterPoint(Point(xCoordinate, yCoordinate)); }

int Rectangle::getRectangleSideA() { return _rectangleSideA; }
int Rectangle::getRectangleSideB() { return _rectangleSideB; }
void Rectangle::setRectangleSideA(int rectangleSideA) { _rectangleSideA = rectangleSideA; }
void Rectangle::setRectangleSideB(int rectangleSideB) { _rectangleSideB = rectangleSideB; }

void Rectangle::draw() { std::cout << _centerPoint.getXCoordinate() << ' ' << _centerPoint.getYCoordinate() << " RETANGULO" << std::endl; }
double Rectangle::area() { return (_rectangleSideA * _rectangleSideB); }