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
    AForm *rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    delete rrf;
} catch (const Intern::FormNotFoundException& e) {
    std::cerr << e.what() << '\n';
}
        return 0;
}