#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor THIS SHOULD NOT BE CALLED\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    // std::cout << "Bureaucrat " << name << "´s main constructor called\n";
    this->name = name;
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        GradeTooHighException();
    else
        this->grade = grade;

}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat " << name << "'s Destructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    // std::cout << "Bureaucrat " << copy.name << "´s copy constructor called\n";
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    // std::cout << "Bureaucrat " << copy.name << "´s copy operator called\n";

    if (this != &copy) {
        this->name = copy.name;
        this->grade = copy.grade;
    }
    return *this;
}

int Bureaucrat::getGrade() const
{
    // std::cout << "Bureaucrat " << name << "´s grade is " << grade << "\n";

    return this->grade;
}

std::string Bureaucrat::getName() const
{
    // std::cout << "Bureaucrat " << name << "´s name is (shocker)" << name << "\n";

    return this->name;
}

void Bureaucrat::IncrementGrade()
{
    // std::cout << "before:" << grade << "\n";
    if (this->grade <= 1)
        throw GradeTooHighException();
    else --this->grade;
    // std::cout << "after: " << grade << "\n";
}

void Bureaucrat::DecrementGrade() {
    // std::cout << "before:" << grade << "\n";

    if (this->grade >= 150)
        throw GradeTooLowException();
    else ++this->grade;
    // std::cout << "after: " << grade << "\n";

}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    (void)bureaucrat;
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "\n";
    return os;
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void  Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    
}