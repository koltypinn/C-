CC		=	clang++

NAME	=	FragTrap

CFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp 

OBJ	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)	
	$(CC) -o $(NAME) $(OBJ)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re