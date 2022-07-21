//
// Created by Lauri Rosby on 7/20/22.
//

#include "Harl.hpp"

void Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
				 "years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {

	thought[0] = &Harl::debug;
	thought[1] = &Harl::info;
	thought[2] = &Harl::warning;
	thought[3] = &Harl::error;
}

Harl::~Harl() {

}

void Harl::complain(std::string level) {
	int caseNum;

	level == "DEBUG" ? caseNum = 0 :
	level == "INFO" ? caseNum = 1 :
	level == "WARNING" ? caseNum = 2 :
	level == "ERROR" ? caseNum = 3 :
			caseNum = 4;

	(this->*thought[caseNum])();
}