#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    AForm *forms[] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)};

    for (int i = 0; i < 3; i++)
    {
        if (formName == forms[i]->getName())
        {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i];
        }
    }
    throw FormNotFoundException();
}
