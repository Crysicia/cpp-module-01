#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name) {}
HumanA::~HumanA() {}

void HumanA::attack(void) {
	std::cout << name << " attacks with " << weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon& weapon) {
	this->weapon = weapon;
}

const Weapon& HumanA::getWeapon(void) const {
	return weapon;
}
