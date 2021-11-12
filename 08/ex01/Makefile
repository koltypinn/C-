SRCS	= main.cpp span.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= test.out
CLANG	= clang++ -std=c++98 -pedantic-errors
FLAGS	= -Wall -Wextra -Werror
INCLUDE	= none
HEADER	= span.hpp

all:	$(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADER)
	$(CLANG) $(FLAGS) -c $<  -o $(<:.cpp=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	clean fclean re 