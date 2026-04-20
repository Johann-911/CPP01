#include "HumanB.hpp"


//constructor
HumanB::HumanB(const std::string& name) : name(name), weapon(NULL)
{
}

//destructor
HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()const 
{
    if(weapon == NULL)
    {
        std::cout << name << " has no weapon! " << std::endl;
        return;
    }
    std::cout << name << " attacks with their " << weapon->getType() <<std::endl;
}
