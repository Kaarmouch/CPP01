#include "Zombie.hpp"

int	main()
{
	Zombie* zombie = newZombie("Georges");

	zombie->announce();

	randomChump("Francis");

	delete zombie;
}
