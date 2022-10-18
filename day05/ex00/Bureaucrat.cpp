//
// Created by Lauri Rosby on 10/18/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) {
    if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade()) {
    if (_grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    if (_grade < 1)
        throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat GradeTooLowException";
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incrGrade(const int &val) {
    if (this->_grade - val < 1)
        throw (Bureaucrat::GradeTooHighException());
    this->_grade -=val;
}

void Bureaucrat::decrGrade(const int &val) {
    if (this->_grade + val > 150)
        throw (Bureaucrat::GradeTooLowException());
    this->_grade += val;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other) {
    out << other.getName() << ", bureaucrat grade " << other.getGrade() << "." << std::endl;
    return out;
}