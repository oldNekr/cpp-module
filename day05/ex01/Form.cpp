//
// Created by Lauri Rosby on 10/20/22.
//

#include "Form.hpp"

Form::Form(const std::string name, int gradeToSign, int gradeToExec)
    : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _signStat(false){
    if (gradeToSign > 150 || gradeToExec > 150)
        throw (Form::GradeTooLowException());
    if (gradeToSign < 1 || gradeToExec < 1)
        throw (Form::GradeTooHighException());
}

Form::Form(const Form &src)
    : _name(src.getName()), _gradeToSign(src.getSignGrade()),
        _gradeToExec(src.getExecGrade()), _signStat(src.getSignStat()){
    if (_gradeToSign > 150 || _gradeToExec > 150)
        throw (Form::GradeTooLowException());
    if (_gradeToSign < 1 || _gradeToExec < 1)
        throw (Form::GradeTooHighException());
}

Form &Form::operator=(const Form &src) {
    this->_signStat = src.getSignStat();
    const_cast <std::string&> (this->_name) = src.getName();
    const_cast <int&> (this->_gradeToSign) = src.getSignGrade();
    const_cast <int&> (this->_gradeToExec) = src.getExecGrade();

    return *this;
}

Form::~Form() {}

const char *Form::GradeTooHighException::what() const throw() {
    return "Form: GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Form: GradeTooLowException";
}


std::string Form::getName() const{
    return this->_name;
}

bool Form::getSignStat() const {
    return this->_signStat;
}

int Form::getSignGrade() const {
    return this->_gradeToSign;
}

int Form::getExecGrade() const {
    return this->_gradeToExec;
}

void Form::beSigned(const Bureaucrat &src) {
    if (src.getGrade() <= this->_gradeToSign)
    {
        if (this->_signStat)
    }
}

std::ostream &operator<<(std::ostream &out, Form const &src){
    out << src.getName() << "\tform >\tsigned stat: " << (src.getSignStat() ? "true, " : "false, ")
    << "grade needed to sign: " << src.getSignGrade()
    << ", grade needed to execute: " << src.getExecGrade() << std::endl;

    return out;
}