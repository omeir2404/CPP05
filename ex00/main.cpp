#include "Bureaucrat.hpp"

int main (void)
{
    Bureaucrat Iron = Bureaucrat("Iron", 1);
    Bureaucrat Matilde = Bureaucrat("Matilde", 150);
    Bureaucrat lmao = Bureaucrat("lmao", 2);
    Bureaucrat Name = Bureaucrat("Name", 149);
    Bureaucrat gutentag = Bureaucrat("gutentag", 5);
    Bureaucrat copy = Iron;
    Iron = lmao;
    
    // Matilde.DecrementGrade(); // supposed to give an error defined in Bureaucrat.cpp
    try
    {
        copy.IncrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << "exception caught with try catch\n";
    }
    
    std::cout << Iron << std::endl;
    std::cout << Matilde << std::endl;
    std::cout << lmao << std::endl;
    std::cout << Name << std::endl;
    std::cout << gutentag << std::endl;
    std::cout << copy << std::endl;




}