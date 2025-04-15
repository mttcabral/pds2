#ifndef BUS_H
#define BUS_H

#include <string>

struct Bus
{
    std::string licensePlate;
    unsigned int passengerCapacity;
    unsigned int currentPassengersCount;

    Bus(std::string, unsigned int);
    bool addPassenger(unsigned int);
    bool removePassenger(unsigned int);
    bool transferPassenger(Bus *, unsigned int);
    void printBusStatus();
};

#endif