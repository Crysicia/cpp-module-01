#include "Zombie.hpp"

int main(void)
{
	Zombie* horde = ZombieHorde(5, "Karl");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
