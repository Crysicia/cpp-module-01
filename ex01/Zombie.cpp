#include "Zombie.hpp"

Zombie::Zombie() : name(std::string()) {}
Zombie::Zombie(std::string name) : name(name) {}
Zombie::~Zombie() {
	std::cout << "Zombie destructor called" << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
