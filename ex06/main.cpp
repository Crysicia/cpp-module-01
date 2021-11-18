#include "Karen.hpp"

int main(int argc, char *argv[]) {
	Karen karen;
	if (argc != 2) { std::cout << "Invalid arguments number, expecting 1 got " << argc - 1 << std::endl; return 1; }


	switch(karen.getLevelIndex(argv[1])) {
		case UNKNOWN: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; break;
		case DEBUG: karen.complain("DEBUG");
		case INFO: karen.complain("INFO");
		case WARNING: karen.complain("WARNING");
		case ERROR: karen.complain("ERROR"); break;
	}
	return 0;
}
