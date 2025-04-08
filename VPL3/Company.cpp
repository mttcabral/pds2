#include "Company.hpp"

Company::Company()
{
    busCounter = 0;
    for (int i = 0; i < 20; i++)
    {
        bus[i] = nullptr;
    }
}