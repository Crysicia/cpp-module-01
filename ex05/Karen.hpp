#ifndef KAREN_H
# define KAREN_H

#include <string>
#include <iostream>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

# define LEVELS 4

class Karen {
public:
	Karen();
	~Karen();
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	typedef void (Karen::* karenFunctions)(void);
	std::string levels[4];
	karenFunctions functions[4];
};

#endif
