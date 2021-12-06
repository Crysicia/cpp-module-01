#include "Zombie.hpp"

int main(void)
{
	std::cout << "---- Initialize 5 Karls ----" << std::endl;
	Zombie* horde = ZombieHorde(5, "Karl");

	std::cout << "---- Call announce() on each of the Karls ----" << std::endl;
	for (int i = 0; i < 5; i++)
		horde[i].announce();

	std::cout << "---- Deleting the horde of Karls ----" << std::endl;
	delete[] horde;
	return 0;
}
