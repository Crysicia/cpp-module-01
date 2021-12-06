#include "Karen.hpp"

int main(void) {
	std::cout << "---- Initialize Karen ----" << std::endl;
	Karen karen;

	std::cout << "---- Karen complains in DEBUG mode ----" << std::endl;
	karen.complain("DEBUG");
	std::cout << "---- Karen complains in INFO mode ----" << std::endl;
	karen.complain("INFO");
	std::cout << "---- Karen complains in WARNING mode ----" << std::endl;
	karen.complain("WARNING");
	std::cout << "---- Karen complains in ERROR mode ----" << std::endl;
	karen.complain("ERROR");
	std::cout << "---- Karen complains in an unknown mode ----" << std::endl;
	karen.complain("OTHER");
	return 0;
}
