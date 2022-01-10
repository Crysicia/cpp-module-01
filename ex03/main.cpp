#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	std::cout << "---- Initialize Weapons ----" << std::endl;
	Weapon longsword = Weapon("LongSword");
	Weapon crossbow = Weapon("Crossbow");

	std::cout << "---- Initialize Humans (Or, are they?) ----" << std::endl;
	// The following won't compile because it needs a reference to a weapon
	// HumanA human = HumanA("Unarmed human", NULL);
	HumanA elve = HumanA("Night elve", longsword);
	HumanB dwarf = HumanB("Dwarf");
	HumanB peon = HumanB("Orc");

	std::cout << "---- Set weapons to HumanB guys ----" << std::endl;
	dwarf.setWeapon(crossbow);

	std::cout << "---- Make them all attack ! ----" << std::endl;
	elve.attack();
	dwarf.attack();

	std::cout << "---- (this one has no weapon tho...) ----" << std::endl;
	peon.attack();


	std::cout << "---- Subject example ----" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return 0;
}
