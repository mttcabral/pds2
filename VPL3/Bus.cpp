#include "Bus.hpp"
#include <string>
#include <iostream>

Bus::Bus(std::string licensePlate, unsigned int passengerCapacity)
    : licensePlate(licensePlate),
      passengerCapacity(passengerCapacity),
      currentPassengersCount(0)
{
}

bool Bus::addPassenger(unsigned int passengersToAdd)
{
    if ((currentPassengersCount + passengersToAdd) <= passengerCapacity)
    {
        currentPassengersCount += passengersToAdd;
        return true;
    }

    return false;
}

bool Bus::removePassenger(unsigned int passengersToRemove)
{
    if (passengersToRemove <= currentPassengersCount)
    {
        currentPassengersCount -= passengersToRemove;
        return true;
    }

    return false;
}

bool Bus::transferPassenger(Bus *destinationBus, unsigned int passengersToTransfer)
{
    if ((destinationBus->currentPassengersCount + passengersToTransfer) <= destinationBus->passengerCapacity)
    {
        destinationBus->currentPassengersCount += passengersToTransfer;
        currentPassengersCount -= passengersToTransfer;
        return true;
    }

    return false;
}

void Bus::printBusStatus()
{
    std::cout << licensePlate << " (" << currentPassengersCount << "/" << passengerCapacity << ")" << std::endl;
}