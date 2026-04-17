#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP  

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <stdexcept>


class Zombie 
{
    private:
        std::string name;
        
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void announce();
        void setName(std::string name);

};

Zombie *zombieHorde(int n, std::string name);

#endif

