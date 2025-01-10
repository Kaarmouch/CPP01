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

		const std::string&	getType() const;
		void	setType(std::string newType);
};

