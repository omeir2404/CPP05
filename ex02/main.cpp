#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    // Create a bureaucrat
    Bureaucrat bureaucrat("John Doe", 100);

    // Create a ShrubberyCreationForm
    ShrubberyCreationForm shrubberyForm("home");

    // Test executing ShrubberyCreationForm
    try
    {
        shrubberyForm.execute(bureaucrat);
        std::cout << "ShrubberyCreationForm executed successfully" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error executing ShrubberyCreationForm: " << e.what() << std::endl;
    }

    // Create a RobotomyRequestForm
    RobotomyRequestForm robotomyForm("target");

    // Test executing RobotomyRequestForm
    try
    {
        robotomyForm.execute(bureaucrat);
        std::cout << "RobotomyRequestForm executed successfully" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error executing RobotomyRequestForm: " << e.what() << std::endl;
    }

    // Create a PresidentialPardonForm
    PresidentialPardonForm pardonForm("target");

    // Test executing PresidentialPardonForm
    try
    {
        pardonForm.execute(bureaucrat);
        std::cout << "PresidentialPardonForm executed successfully" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error executing PresidentialPardonForm: " << e.what() << std::endl;
    }

    return 0;
}
