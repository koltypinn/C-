NAME = Brain

CFLAGS = -Wall -Wextra -Werror

SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADER = Animal.hpp Cat.cpp Dog.cpp Brain.hpp

all: $(NAME)

%.o: %.cpp $(HEADER)
	clang++ $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	clang++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all