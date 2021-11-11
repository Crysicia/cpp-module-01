#include "Zombie.hpp"

int main(void)
{

	randomChump("Frank");
	Zombie* carlos = newZombie("Carlos");
	carlos->announce();

	delete carlos;
	return 0;
}
