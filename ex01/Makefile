NAME	= ex01

CC		= c++ -Wall -Werror -Wextra -std=c++98

SRC	= main.cpp Bureaucrat.cpp Form.cpp

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

mem: re	
	valgrind ./ex01

.PHONY:	all clean fclean re