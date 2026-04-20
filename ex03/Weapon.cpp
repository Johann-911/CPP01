#include "Weapon.hpp"


//constructor
Weapon::Weapon(std::string type) : type(type)
{
}

//destructor
Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType() const 
{
    return this->type;
}