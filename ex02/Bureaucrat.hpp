#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
    private:
        std::string name;
        int grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        int getGrade() const;
        std::string getName() const;
        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "Grade too High!";
                }
        };

        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "Grade too Low!";
                }
        };

        void IncrementGrade();
        void DecrementGrade();
        void signForm(AForm &form);
        void executeForm(AForm const & form);
};
        std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif