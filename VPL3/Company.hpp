#ifndef COMPANY_H
#define COMPANY_H

#include <Bus.hpp>

struct Company
{
    unsigned int busCounter;
    Bus *bus[20];

    Company();
    Bus *addBus(std::string, unsigned int);
    Bus *searchBus(std::string);
    void printAllBusStatus();
};

#endif