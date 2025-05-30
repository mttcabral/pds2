#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
#include "GeometricShape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"

int main()
{
    std::vector<GeometricShape *> geometricShapesVector;

    std::string userInput;
    getline(std::cin, userInput);

    while (userInput[0] != 'E')
    {
        if (userInput[0] == 'R')
        {
            std::istringstream iss(userInput);
            char command;
            int xCoordinate, yCoordinate, rectangleSideA, rectangleSideB;

            iss >> command >> xCoordinate >> yCoordinate >> rectangleSideA >> rectangleSideB;

            geometricShapesVector.push_back(new Rectangle(xCoordinate, yCoordinate, rectangleSideA, rectangleSideB));
        }
        else if (userInput[0] == 'C')
        {
            std::istringstream iss(userInput);
            char command;
            int xCoordinate, yCoordinate, circleRadius;

            iss >> command >> xCoordinate >> yCoordinate >> circleRadius;

            geometricShapesVector.push_back(new Circle(xCoordinate, yCoordinate, circleRadius));
        }
        else if (userInput[0] == 'T')
        {
            std::istringstream iss(userInput);
            char command;
            int xCoordinate, yCoordinate, triangleBase, triangleHeight;

            iss >> command >> xCoordinate >> yCoordinate >> triangleBase >> triangleHeight;

            geometricShapesVector.push_back(new Triangle(xCoordinate, yCoordinate, triangleBase, triangleHeight));
        }
        else if (userInput[0] == 'D')
        {
            for (GeometricShape *geometricShape : geometricShapesVector)
            {
                geometricShape->draw();
            }
        }
        else if (userInput[0] == 'A')
        {
            double totalArea = 0;
            for (GeometricShape *geometricShape : geometricShapesVector)
            {
                totalArea += geometricShape->area();
            }

            std::cout << std::fixed << std::setprecision(2) << totalArea << std::endl;
        }

        getline(std::cin, userInput);
    }

    return 0;
}