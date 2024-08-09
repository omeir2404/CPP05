#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Form form1("Form 1", 5, 10);
    std::cout << "Form 1 created successfully" << std::endl;

    // Form form2("Form 2", 200, 10); // should give grade to low exception
    
    //Form form3("Form 3", -200, 10); // should give grade too high 
    Bureaucrat jhon = Bureaucrat("Jhon", 100);
    Bureaucrat lol = Bureaucrat("lol", 3);

    // form1.beSigned(jhon); // should give grade too low 
    form1.beSigned(lol);
    return 0;
}