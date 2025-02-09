#pragma once

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie &zombie);
		~Zombie();
		void	announce();
};


Zombie* newZombie(std::string name);
void randomChump(std::string name);
