#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
try {
    Intern someRandomIntern;
    AForm *formA;
    formA = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    delete formA;
} catch (const Intern::FormNotFoundException& e) {
    std::cerr << e.what() << '\n';
}
        return 0;
}