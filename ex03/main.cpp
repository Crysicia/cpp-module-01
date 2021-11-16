#include "Weapon.hpp"
#include "HumanA.hpp"

int main(void) {
	Weapon* longsword = new Weapon("LongSword");
	HumanA& human = new HumanA("Night elve", longsword);

	human.attack();
}
