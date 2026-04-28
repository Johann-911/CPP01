#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "DEBUG I love having extra bacon...!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "cannot believe adding extra bacon..." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon..." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak..." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};  
    void (Harl::*funcs[4])(void) = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for(int i = 0; i < 4; i++)
    {
        if(levels[i] == level)
        {
            (this->*funcs[i])();
            return;
        }
    }
    std::cout << "he is still complaining..." << std::endl;
    return ;            
}