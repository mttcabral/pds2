#include "Bus.hpp"
#include "Company.hpp"
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string input, inputWords[10];
    Company company;

    do
    {
        std::getline(std::cin, input);

        std::istringstream iss(input);

        std::string word;
        int i = 0;

        while (iss >> word)
        {
            inputWords[i] = word;
            i++;
        }

        if (inputWords[0] == "C")
        {
            unsigned int passengerCapacity = static_cast<unsigned int>(std::stoul(inputWords[2]));
            if (company.addBus(inputWords[1], passengerCapacity) != nullptr)
            {
                std::cout << "novo onibus cadastrado" << std::endl;
            }
            else
            {
                std::cout << "ERRO : onibus repetido" << std::endl;
            }
        }
        else if (inputWords[0] == "S")
        {
            unsigned int passengersToAdd = static_cast<unsigned int>(std::stoul(inputWords[2]));
            if (company.searchBus(inputWords[1]) != nullptr && company.searchBus(inputWords[1])->addPassenger(passengersToAdd) == true)
            {
                std::cout << "passageiros subiram com sucesso" << std::endl;
            }
            else if (company.searchBus(inputWords[1]) == nullptr)
            {
                std::cout << "ERRO : onibus inexistente" << std::endl;
            }
            else
            {
                std::cout << "ERRO : onibus lotado" << std::endl;
            }
        }
        else if (inputWords[0] == "D")
        {
            unsigned int passengersToRemove = static_cast<unsigned int>(std::stoul(inputWords[2]));
            if (company.searchBus(inputWords[1]) != nullptr && company.searchBus(inputWords[1])->removePassenger(passengersToRemove) == true)
            {
                std::cout << "passageiros desceram com sucesso" << std::endl;
            }
            else if (company.searchBus(inputWords[1]) == nullptr)
            {
                std::cout << "ERRO : onibus inexistente" << std::endl;
            }
            else
            {
                std::cout << "ERRO : faltam passageiros" << std::endl;
            }
        }
        else if (inputWords[0] == "T")
        {
            unsigned int passengersToTransfer = static_cast<unsigned int>(std::stoul(inputWords[3]));
            if (company.searchBus(inputWords[1]) != nullptr && company.searchBus(inputWords[2]) != nullptr && (company.searchBus(inputWords[1])->transferPassenger(company.searchBus(inputWords[2]), passengersToTransfer) == true))
            {
                std::cout << "transferencia de passageiros efetuada" << std::endl;
            }
            else if (company.searchBus(inputWords[1]) == nullptr)
            {
                std::cout << "ERRO : onibus inexistente" << std::endl;
            }
            else
            {
                std::cout << "ERRO : transferencia cancelada" << std::endl;
            }
        }
        else if (inputWords[0] == "I")
        {
            company.printAllBusStatus();
        }

    } while (input[0] != 'F');

    return 0;
}