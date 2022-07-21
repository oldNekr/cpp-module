//
// Created by Lauri Rosby on 7/20/22.
//

#ifndef CPP_MODULE_HARL_HPP
#define CPP_MODULE_HARL_HPP

#include <iostream>

class Harl {
private:
	void debug();
	void info();
	void warning();
	void error();
	void (Harl::*thought[5]) (void); // указатель на метод

public:
	Harl();
	~Harl();

	void complain(std::string level);
};


#endif //CPP_MODULE_HARL_HPP
