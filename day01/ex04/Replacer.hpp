//
// Created by Lauri Rosby on 7/20/22.
//

#ifndef CPP_MODULE_REPLACER_HPP
#define CPP_MODULE_REPLACER_HPP

#include <iostream>
#include <fstream>

class Replacer {

public:
	Replacer();
	~Replacer();

	static void replace(std::string const &filename, std::string const &s1, std::string const &s2);
};


#endif //CPP_MODULE_REPLACER_HPP
