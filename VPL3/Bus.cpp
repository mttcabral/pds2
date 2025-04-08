#include "Bus.hpp"
#include <string>
#include <iostream>

Bus::Bus(std::string licensePlate, unsigned int passengerCapacity)
    : licensePlate(licensePlate),
      passengerCapacity(passengerCapacity),
      currentPassengersCount(0)
{
}

void Bus::addPassenger(unsigned int passengersToAdd)
{
    if ((currentPassengersCount + passengersToAdd) <= passengerCapacity)
        currentPassengersCount += passengersToAdd;
}

void Bus::printBusStatus()
{
    std::cout << licensePlate << " (" << currentPassengersCount << "/" << passengerCapacity << ")" << std::endl;
}