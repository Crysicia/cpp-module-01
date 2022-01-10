#ifndef HUMAN_B_H
# define HUMAN_B_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon& weapon);
	const Weapon* getWeapon(void) const;
	
private:
	Weapon* weapon;
	std::string name;
};

#endif
