#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{
    std::cout << "ShrubberyCreationForm Constructed using default Constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm Constructed using Parametered Constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other), target(other.target)
{
    std::cout << "ShrubberyCreationForm Constructed using Copy Constructor\n";
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    *this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Desctructor called\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
    if (executor.getGrade() > this->getGradeToExecute())
}
