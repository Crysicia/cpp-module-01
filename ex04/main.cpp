#include <string>
#include <iostream>
#include <fstream>

void ft_replace(std::string& string, const std::string& s1, const std::string& s2) {
	for (size_t position = 0; position < string.length(); position++) {
		position = string.find(s1, position);
		if (position >= string.length()) { return ; }
		string.erase(position, s1.length());
		string.insert(position, s2);
	}
}

int main(int argc, char *argv[]) {
	const int FILENAME = 1;
	const int S1 = 2;
	const int S2 = 3;

	std::string filename = argv[FILENAME];
	std::string s1 = argv[S1];
	std::string s2 = argv[S2];
	std::string line;

	if (argc != 4 or filename.empty() or s1.empty() or s2.empty())
		std::cout << "Invalid arguments" << std::endl;

	std::ifstream infile(filename);
	std::ofstream outfile(filename.append(".replace"));

	if (!infile.is_open() or !outfile.is_open()) { std::cout << "Could not open files" << std::endl; }

	while (getline(infile, line)) {
		ft_replace(line, s1, s2);
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();
	return 0;
}
