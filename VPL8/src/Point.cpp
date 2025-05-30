#include "Point.hpp"

Point::Point() : _xCoordinate(0), _yCoordinate(0) {}
Point::Point(int xYCoordinate) : _xCoordinate(xYCoordinate), _yCoordinate(xYCoordinate) {}
Point::Point(int xCoordinate, int yCoordinate) : _xCoordinate(xCoordinate), _yCoordinate(yCoordinate) {}

int Point::getXCoordinate() { return _xCoordinate; }
int Point::getYCoordinate() { return _yCoordinate; }

void Point::setXCoordinate(int xCoordinate) { this->_xCoordinate = xCoordinate; }
void Point::setYCoordinate(int yCoordinate) { this->_yCoordinate = yCoordinate; }
