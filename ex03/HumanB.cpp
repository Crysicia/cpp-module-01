#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}
HumanB::~HumanB() {}

void HumanB::attack(void) {
	std::string weaponType;

	if (!weapon) { weaponType = "Bare fists"; }
	else {weaponType = weapon->getType(); }
	std::cout << name << " attacks with " << weaponType << std::endl;
}

void HumanB::setWeapon(Weapon* weapon) {
	this->weapon = weapon;
}

const Weapon* HumanB::getWeapon(void) const {
	return weapon;
}
