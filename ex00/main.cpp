#include "Zombie.hpp"

int	main()
{
	Zombie* zombie = newZombie("");

	zombie->announce();

	randomChump("Francis");

	delete zombie;
}
