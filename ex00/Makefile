NAME	= ex00

CC		= c++ -Wall -Werror -Wextra -std=c++98

SRC	= main.cpp Bureaucrat.cpp



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