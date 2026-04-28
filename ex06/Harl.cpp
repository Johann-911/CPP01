#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\nI love having extra bacon...!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon..." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon..." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak..." << std::endl;
}

void Harl::complain(std::string level)
{
    int index = -1;
    if(level == "DEBUG")
        index = 0;
    else if(level == "INFO")
        index = 1;
    else if(level == "WARNING")
        index = 2;
    else if(level == "ERROR")
        index = 3;
    switch(index)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
           std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}