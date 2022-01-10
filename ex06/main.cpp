#include "Karen.hpp"

int main(int argc, char *argv[]) {
	Karen karen;
	if (argc != 2) { std::cout << "Invalid number of arguments, expecting 1 got " << argc - 1 << std::endl; return 1; }

	// To make this switch statement compile on the Linux dumps, add  __attribute__ ((fallthrough)); after each case that should fall through
	switch(karen.getLevelIndex(argv[1])) {
		case UNKNOWN: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; break;
		case DEBUG: karen.complain("DEBUG");
		case INFO: karen.complain("INFO");
		case WARNING: karen.complain("WARNING");
		case ERROR: karen.complain("ERROR");
	}
	return 0;
}
