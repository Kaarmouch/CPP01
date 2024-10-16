#pragma once

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(const Zombie &zombie);
		~Zombie();
		void	announce();
		void	zSetName(std::string name);
};

Zombie*	zombieHorde(int	N, std::string name);
