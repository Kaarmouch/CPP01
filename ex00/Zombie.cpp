#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
	std::cout << "Deadwalker Created" << std::endl;
}

Zombie::Zombie(const Zombie &zombie)
{
        this->name = zombie.name;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " The deadwalkywo was created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " had said hi to the destructor" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiinnnzzzZ..." << std::endl;
}
