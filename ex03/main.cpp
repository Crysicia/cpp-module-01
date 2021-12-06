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
	dwarf.setWeapon(&crossbow);
	peon.setWeapon(NULL);

	std::cout << "---- Make them all attack ! ----" << std::endl;
	elve.attack();
	dwarf.attack();

	std::cout << "---- (this one has no weapon tho...) ----" << std::endl;
	peon.attack();
}
