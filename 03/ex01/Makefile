CC		=	clang++

NAME	=	ScavTrap

CFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp

HEADER	=	ClapTrap.hpp ScavTrap.hpp

OBJ	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)	$(HEADER)
	$(CC) -o $(NAME) $(OBJ)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re