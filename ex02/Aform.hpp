#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
    private://not const becuase of copy constructor, but unchangable
        std::string name;
        bool isSigned;
        int gradeToSign;
        int gradeToExecute;

    public:
        AForm();
        AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
        virtual ~AForm();
        std::string getName();
        int getGradeToSign();
        int getGradeToExecute();
        AForm(const AForm &copy);
        AForm &operator=(const AForm &copy);
        void beSigned(Bureaucrat &bureaucrat);
        virtual void execute() = 0; // Pure virtual function
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
        friend std::ostream &operator<<(std::ostream &os, const AForm &AForm);
};

#endif