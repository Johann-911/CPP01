#include "Zombie.hpp"

//Konstruktor
Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << name << " is born!" << std::endl;
}
//Destruktor
Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " is destroyed!" << std::endl;
}

void Zombie::announce() const
{
    std::cout << "Zombie " << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}