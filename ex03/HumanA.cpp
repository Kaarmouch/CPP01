#include "HumanA.hpp"

HumanA::~HumanA()
{
	std::cout << "A ou B... plus que des cendres..." << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

void HumanA::attack()
{
	std::cout << name << " hit u on ur neck w8" << weapon->getType() << " while ur coding minishell : b care full"  << std::endl;
}

