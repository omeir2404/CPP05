#include "Form.hpp"

Form::Form() : name("default_form"), gradeToSign(150), gradeToExecute(150)
{
    isSigned = false;
    std::cout << "Form default constructor, will be given default values";
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
    : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    isSigned = false;
    std::cout << "Form constructor called";
}

Form::Form(const Form &copy)
{
    *this=copy;
}

Form &Form::operator=(const Form &copy)
{
    std::cout << copy.name << "'s copy constructor called";
    if (this != &copy)
    {
        this->name = copy.name;
        this->gradeToSign = copy.gradeToSign;
        this->gradeToExecute = copy.gradeToExecute;
    }
    return *this;
}

Form::~Form()
{
    std::cout << "Form destructor called";
}

std::string Form::getName()
{
    return name;
}

int Form::getGradeToSign()
{
    return gradeToSign;
}

int Form::getGradeToExecute()
{
    return gradeToExecute;
}



std::ostream &operator<<(std::ostream &os, Form &Form)
{
    os << Form.getName() << ", Form grade to sign " << Form.getGradeToSign() << "\n";
    return os;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeToSign)
    {
        isSigned = true;
        std::cout << bureaucrat.getName() << " signed " << name << std::endl;
    }
    else
    {
        throw GradeTooLowException();
    }
}
