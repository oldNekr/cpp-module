//
// Created by Lauri Rosby on 10/18/22.
//

#include "Bureaucrat.hpp"

int main() {
    try
    {
		Bureaucrat	dude1("DUDE_HIGH", -1);
        Bureaucrat	dude2("Steve", 21);
        Bureaucrat	dude3("Rei", 42);
//		Bureaucrat	dude4("DUDE_LOW", 151);
        std::cout << dude2;
        std::cout << dude3;

//		dude2.incrGrade(30);
//		dude3.decrGrade(110);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}