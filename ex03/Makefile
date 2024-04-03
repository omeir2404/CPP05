NAME	= ex03

CC		= c++ -Wall -Werror -Wextra -std=c++98

SRC	= main.cpp Bureaucrat.cpp AForm.cpp \
PresidentialPardonForm.cpp ShrubberyCreationForm.cpp\
 RobotomyRequestForm.cpp Intern.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:		
	rm -f $(OBJ)

run:		$(NAME)
			./$(NAME)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re