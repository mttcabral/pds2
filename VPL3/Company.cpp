#include "Company.hpp"
#include <iostream>

Company::Company()
{
    busCounter = 0;
    for (int i = 0; i < 20; i++)
    {
        bus[i] = nullptr;
    }
}

Bus *Company::searchBus(std::string licensePlate)
{
    for (int i = 0; i < 20; i++)
    {
        if (bus[i] != nullptr && bus[i]->licensePlate == licensePlate)
        {
            return bus[i];
        }
    }

    return nullptr;
}