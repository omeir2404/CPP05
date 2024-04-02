#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Aform.hpp"

class ShrubberyCreationForm : public AForm
{

private:
    std::string target;
public:
    ShrubberyCreationForm();

    ShrubberyCreationForm(const std::string &target);

    ShrubberyCreationForm(const ShrubberyCreationForm &other);

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

    ~ShrubberyCreationForm();

    std::string getTarget()const;

    void formExecutor()const;
};

#endif