#ifndef HUMAN_A_H
# define HUMAN_A_H

#include <string>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack(void);
	void setWeapon(Weapon& weapon);
	Weapon& getWeapon(void);
private:
	Weapon& weapon;
	std::string name;
};

#endif
