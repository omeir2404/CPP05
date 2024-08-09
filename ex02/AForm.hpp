#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <fstream>

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
        AForm &operator=(const AForm &copy);
        AForm(const AForm &copy);

        void beSigned(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const & executor) const;
        virtual void formExecutor() const = 0;
        std::string getName()const;
        int getGradeToSign();
        int getGradeToExecute();
        bool getIsSigned();
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
        class UnsignedFormException : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "Form needs to be signed before executing!";
                }
        };
};
        std::ostream &operator<<(std::ostream &os, const AForm &AForm);

#endif