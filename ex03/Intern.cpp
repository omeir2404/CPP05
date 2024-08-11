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
    std::string formNames[] = {"robotomy request", "presidential pardon", "shrubbery creation"}; 
    AForm *forms[] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)};

    for (int i = 0; i < 3; i++)
    {
        if (formName == forms[i]->getName() || formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            // Delete the unused forms
            for (int j = 0; j < 3; j++)
            {
                if (i != j)
                {
                    delete forms[j];
                }
            }
            return forms[i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        delete forms[i];
    }

    throw FormNotFoundException();
}
