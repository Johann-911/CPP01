#ifndef Zombie_HPP
#define Zombie_HPP 

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

Zombie *newZombie(int n, std::string name);
void    randomChump(std::string name);

#endif  