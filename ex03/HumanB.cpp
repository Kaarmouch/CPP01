#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = 0;
	std::cout << "B ou A... debut des probleme..." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "B ou A... plus que des cendres.." << std::endl;
	
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << "'s unarmed... he cant strik!!" << std::endl;
}
