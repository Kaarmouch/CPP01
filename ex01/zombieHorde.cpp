#include "Zombie.hpp"

Zombie*	zombieHorde(int	N, std::string name)
{
	if (N <= 0) 
	{
		std::cout << "Error: Horde size must be positive." << std::endl;
		return 0;
	}
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].zSetName(name);
	return horde;
}

