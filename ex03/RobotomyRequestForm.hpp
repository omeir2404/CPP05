#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <string>
#include "AForm.hpp"
#include <cstdlib> // for rand and srand
#include <ctime> // for time

class RobotomyRequestForm : public AForm {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    void formExecutor() const;

private:
    std::string target;
};

#endif // RobotomyRequestForm_HPP