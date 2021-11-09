NAME = claptrap

SRC =	main.cpp\
		ClapTrap.cpp\

OBJS = $(SRC:.cpp=.o)

HEADER = ClapTrap.hpp

CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98 

CC = clang++

all: $(NAME)

$(NAME):	$(OBJS) $(HEADER)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o:	%.cpp $(HEADER)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: fclean all 

.PHONY:			all clean fclean re
    