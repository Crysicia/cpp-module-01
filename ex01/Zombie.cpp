#include "Zombie.hpp"

Zombie::Zombie() : name(std::string()) {}
Zombie::Zombie(std::string name) : name(name) {}
Zombie::~Zombie() {
	std::cout << name << " destructor called" << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::announce(void) const {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
