#ifndef BUS_H
#define BUS_H

#include <string>

struct Bus
{
    std::string licensePlate;
    unsigned int passengerCapacity;
    unsigned int currentPassengersCount;

    Bus(std::string, unsigned int);
    void addPassenger(unsigned int);
    void removePassenger(unsigned int);
    void transferPassenger(Bus *, unsigned int);
    void printBusStatus();
};

#endif