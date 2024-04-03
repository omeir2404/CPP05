#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :AForm("PresidentialPardonForm", 25, 5), target("default")
{
    // std::cout << "PresidentialPardonForm Constructed using default Constructor\n";

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :AForm("PresidentialPardonForm", 25, 5), target(target)
{
    // std::cout << "PresidentialPardonForm Constructed using Parametered Constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other), target(other.target)
{
    // std::cout << "PresidentialPardonForm Constructed using Copy Constructor\n";
    *this = other;}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "PresidentialPardonForm Desctructor called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this->target != other.target){
        this->target = other.target;
    }
    return *this;
}

void PresidentialPardonForm::formExecutor() const
{
    std::cout << target << " was pardoned by Zaphod Beeblebrox!" << std::endl;
}

