//
// Created by Lauri Rosby on 10/18/22.
//

#ifndef CPP_MODULE_BUREAUCRAT_HPP
#define CPP_MODULE_BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Bureaucrat {
private:
    std::string const _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat &operator=(Bureaucrat const &src);
    virtual ~Bureaucrat();

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };

    std::string getName() const;
    int getGrade() const;

    void incrGrade(int const &val);
    void decrGrade(int const &val);

    void signForm(Form &str) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other);

#endif //CPP_MODULE_BUREAUCRAT_HPP
