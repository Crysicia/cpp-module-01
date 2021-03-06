#include <string>
#include <iostream>
#include <fstream>

std::string& ft_replace(std::string& string, const std::string& s1, const std::string& s2) {
	for (size_t position = 0; position < string.length(); position++) {
		position = string.find(s1, position);
		if (position >= string.length()) { return string; }
		string.erase(position, s1.length());
		string.insert(position, s2);
		position += s2.length() - 1;
	}
	return string;
}

int main(int argc, char *argv[]) {
	const int FILENAME = 1;
	const int S1 = 2;
	const int S2 = 3;

	if (argc != 4) {
		std::cout << "Invalid arguments" << std::endl;
		return 1;
	}

	std::string filename = argv[FILENAME];
	std::string s1 = argv[S1];
	std::string s2 = argv[S2];
	std::string line;

	if (filename.empty() or s1.empty() or s2.empty()) {
		std::cout << "Invalid arguments" << std::endl;
		return 1;
	}

	std::ifstream infile(filename.c_str());
	std::ofstream outfile(filename.append(".replace").c_str());

	if (!infile.is_open() or !outfile.is_open()) { std::cout << "Could not open files" << std::endl; }

	while (getline(infile, line)) {
		outfile << ft_replace(line, s1, s2) << std::endl;
	}

	infile.close();
	outfile.close();
	return 0;
}
