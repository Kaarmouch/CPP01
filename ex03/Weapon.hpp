#pragma once

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();

		std::string	getType();
		void	setType(std::string newType);
};

