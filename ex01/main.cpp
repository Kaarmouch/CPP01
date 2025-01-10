#include "Zombie.hpp"

int	main()
{
	int	N = 5;
	Zombie* horde = zombieHorde(N, "Georges");

	if (horde) 
	{
		std::cout << "\n--- Zombies announcing themselves ---" << std::endl;
		for (int i = 0; i < N; i++) 
			horde[i].announce();
		std::cout << "\n--- Destroying the horde ---" << std::endl;
		delete[] horde;
	}
}
