#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Aform.hpp"

class ShrubberyCreationForm : public AForm
{

private:
    int gradeToSign;
    int gradeToExecute;
    std::string target;
public:
    ShrubberyCreationForm();

    ShrubberyCreationForm(const std::string &target);

    ShrubberyCreationForm(const ShrubberyCreationForm &other);

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

    ~ShrubberyCreationForm();

    void execute(Bureaucrat const &executor)const;
};

#endif