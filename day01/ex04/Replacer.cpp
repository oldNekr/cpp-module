//
// Created by Lauri Rosby on 7/20/22.
//

#include "Replacer.hpp"

Replacer::Replacer() {}

Replacer::~Replacer() {}

void Replacer::replace(const std::string &filename, const std::string &s1, const std::string &s2) {
	if (filename.empty())
		throw "Filename is empty";
	if (s1.empty())
		throw "String to find is empty";
	if (s2.empty())
		throw "String to replace is empty";

	std::ifstream if_File; // файл для чтения (ввод)
	if_File.open(filename);
	if (!if_File.is_open())
		throw "Input file wasn't open";


	std::ofstream of_File;// файл для записи (вывод)
	std::string of_FileName = filename + ".replace";
	of_File.open(of_FileName);
	if (!of_File.is_open()) {
		if_File.close();
		throw "Output file wasn't open";
	}

	std::string buffer;
	size_t found;
	while (!if_File.eof()) {
		getline(if_File, buffer);
		while (true) {
			found = buffer.find(s1); // находит позицию строки s1
			if (found != std::string::npos) {
				buffer.erase(found, s1.length()); // удаление
				buffer.insert(found, s2); //замена
			} else
				break;
		}
		of_File << buffer << std::endl;
	}

	if_File.close();
	of_File.close();
}