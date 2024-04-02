#include "Aform.hpp"

AForm::AForm() : name("default_Aform"), gradeToSign(150), gradeToExecute(150)
{
    isSigned = false;
    std::cout << "AForm default constructor, will be given default values";
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute)
    : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    isSigned = false;
    std::cout << "AForm constructor called";
}

AForm::AForm(const AForm &copy)
{
    *this=copy;
}

AForm &AForm::operator=(const AForm &copy)
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

AForm::~AForm()
{
    std::cout << "AForm destructor called";
}

std::string AForm::getName()
{
    return name;
}

int AForm::getGradeToSign()
{
    return gradeToSign;
}

int AForm::getGradeToExecute()
{
    return this->gradeToExecute;
}

bool AForm::getIsSigned()
{
    return this->isSigned;
}

std::ostream &operator<<(std::ostream &os, AForm &AForm)
{
    os << AForm.getName() << ", AForm grade to sign " << AForm.getGradeToSign() << "\n";
    return os;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeToSign)
    {
        isSigned = true;
        //std::cout << bureaucrat.getName() << " signed " << name << std::endl;//is printed by calling function(signAForm)
    }
    else
    {
        throw GradeTooLowException();
    }
}
void AForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > gradeToExecute)
        throw (Bureaucrat::GradeTooLowException());
    else if (!isSigned)
        throw(AForm::UnsignedFormException());
    formExecutor();
    
}