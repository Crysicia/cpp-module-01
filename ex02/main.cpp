#include <string>
#include <iostream>

int main(void) {
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "String address:"											<< std::endl
			  << "(In memory):       "	<< &string							<< std::endl
			  << "(Using stringPTR): "	<< stringPTR						<< std::endl
			  << "(Using stringREF): "	<< &stringREF						<< std::endl
			  << "String display:"											<< std::endl
			  << "(Using stringPTR): "	<< *stringPTR						<< std::endl
			  << "(Using stringREF): "	<< stringREF						<< std::endl;
}
