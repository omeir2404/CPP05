#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :AForm("RobotomyRequestForm", 72, 45), target("default")
{
    // std::cout << "RobotomyRequestForm Constructed using default Constructor\n";

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :AForm("RobotomyRequestForm", 72, 45), target(target)
{
    // std::cout << "RobotomyRequestForm Constructed using Parametered Constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other), target(other.target)
{
    // std::cout << "RobotomyRequestForm Constructed using Copy Constructor\n";
    *this = other;}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm Desctructor called\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this->target != other.target){
        this->target = other.target;
    }
    return *this;
}

void RobotomyRequestForm::formExecutor() const
{
	std::cout << " SOME DRILLING NOISES " << std::endl << target;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << " has been successfully Roooobotimized!" << std::endl;
	else
		std::cout << " did not work, womp womp!" << std::endl;
}

