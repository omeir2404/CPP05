#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

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
        void signForm(Form &form);
};
        std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif