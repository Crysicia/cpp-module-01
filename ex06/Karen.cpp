#include "Karen.hpp"

Karen::Karen() {
	levels[DEBUG] = "DEBUG";
	levels[INFO] = "INFO";
	levels[WARNING] = "WARNING";
	levels[ERROR] = "ERROR";

	functions[DEBUG] = &Karen::debug;
	functions[INFO] = &Karen::info;
	functions[WARNING] = &Karen::warning;
	functions[ERROR] = &Karen::error;
}

Karen::~Karen() {}

void Karen::complain(std::string level) {
	for (size_t i = 0; i < LEVELS; i++) {
		if (levels[i] == level) {
			(this->*functions[i])();
			return ;
		}
	}
}

int Karen::getLevelIndex(std::string level) {
	for (size_t i = 0; i < LEVELS; i++) {
		if (levels[i] == level) { return i; }
	}
	return UNKNOWN;
}

void Karen::debug() {
	std::cout << "[ DEBUG ]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info() {
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extre bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning() {
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error() {
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable. I want to speak to the manager now." << std::endl;
}
