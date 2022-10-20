//
// Created by Lauri Rosby on 10/20/22.
//

#ifndef CPP_MODULE_FORM_HPP
#define CPP_MODULE_FORM_HPP

#include "Bureaucrat.hpp"

class Form {
private:
    std::string const _name;
    bool _signStat;
    int const _gradeToSign;
    int const _gradeToExec;

public:
    Form();
    Form(std::string const name, int gradeToSign, int gradeToExec);
    Form(Form const &src);
    Form &operator=(Form const &src);
    virtual ~Form();

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };

    std::string getName() const;
    bool getSignStat() const;
    int getSignGrade() const;
    int getExecGrade() const;

    void beSigned(Bureaucrat const &src);
};

std::ostream &operator<<(std::ostream &out, Form const &other);


#endif //CPP_MODULE_FORM_HPP
