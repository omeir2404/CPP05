NAME	= ex02

CC		= c++ -Wall -Werror -Wextra -std=c++98

SRC	= main.cpp Bureaucrat.cpp AForm.cpp \
PresidentialPardonForm.cpp ShrubberyCreationForm.cpp\
 RobotomyRequestForm.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:		
	rm -f $(OBJ)

run:		$(NAME)
			./$(NAME)

fclean:		clean
			rm -f $(NAME) home_shrubbery

re:			fclean $(NAME)

.PHONY:	all clean fclean re