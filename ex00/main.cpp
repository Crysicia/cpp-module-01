#include "Zombie.hpp"

int main(void)
{
	std::cout << "---- Using randomChump() ----" << std::endl;
	randomChump("Frank");

	std::cout << std::endl << "---- Using newZombie() then announce() ----" << std::endl;
	Zombie* carlos = newZombie("Carlos");
	carlos->announce();
	delete carlos;
	
	return 0;
}
