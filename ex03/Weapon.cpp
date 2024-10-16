#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
	std::cout << "Weapon Builded" << std::endl;
}

Weapon::Weapon(std::string  weapon)
{
	setType(weapon);
	std::cout << type <<" sur l'etablie" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "*Devoreur d'arme!" << std::endl;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}

std::string Weapon::getType()
{
	return type;
}
