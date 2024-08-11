#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
private:

public:
    Intern();
    Intern(const Intern& other);
    ~Intern();
    Intern& operator=(const Intern& other);

    AForm* makeForm(std::string formName, std::string target);

    
class FormNotFoundException : public std::exception
{
public:
    virtual const char *what() const throw()
    {
        return "Form Does Not Exist!";
    }
};



};

#endif