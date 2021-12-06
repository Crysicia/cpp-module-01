#ifndef HUMAN_A_H
# define HUMAN_A_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack(void);
	void setWeapon(Weapon& weapon);
	const Weapon& getWeapon(void) const;

private:
	Weapon& weapon;
	std::string name;
};

#endif
