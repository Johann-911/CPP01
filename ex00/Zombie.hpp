#ifndef ZOmBIE_HPP
#define ZOmBIE_HPP 

#include <iostream>
#include <string>

class Zombie
{   
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        Zombie();
        void announce() const;
        void setName(std::string name);
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif  