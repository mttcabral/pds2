#ifndef POINT_H
#define POINT_H

class Point
{
private:
    int _xCoordinate;
    int _yCoordinate;

public:
    Point();
    Point(int);
    Point(int, int);

    int getXCoordinate();
    int getYCoordinate();

    void setXCoordinate(int);
    void setYCoordinate(int);
};

#endif