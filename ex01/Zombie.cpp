#include "Zombie.hpp"

//Constructor
Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << name << " is born!" << std::endl;
}
//Def Const
Zombie::Zombie() : name("Unnamed")
{
    std::cout << "Zombie " << name << " is born!" << std::endl;
}


//Destructor
Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " is destroyed!" << std::endl;
}

void Zombie::announce()
{
    std::cout << "Zombie " << name << "Braiiinnzz.." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}