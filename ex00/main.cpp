#include "Zombie.hpp"

int main()
{
    randomChump("john on stack");
    Zombie *leo = newZombie("leo on heap");
    leo->announce();
    delete leo;
    return 0;
}