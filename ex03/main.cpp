#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	Weapon longsword = Weapon("LongSword");
	Weapon crossbow = Weapon("Crossbow");
	HumanA elve = HumanA("Night elve", longsword);
	HumanB dwarf = HumanB("Dwarf");

	dwarf.setWeapon(&crossbow);
	elve.attack();
	dwarf.attack();
}
