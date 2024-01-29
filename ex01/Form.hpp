#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        std::string name;
        bool isSigned;
        int gradeToSign;
        int gradeToExecute;

    public:
        Form();
        Form(const std::string name, const int gradeToSign, const int gradeToExecute);
        ~Form();
        std::string getName();
        int getGradeToSign();
        int getGradeToExecute();
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        void beSigned(Bureaucrat &bureaucrat);
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
        friend std::ostream &operator<<(std::ostream &os, const Form &Form);

};

#endif