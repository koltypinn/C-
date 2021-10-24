NAME = Animal

CFLAGS = -Wall -Wextra -Werror

SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

OBJS	= $(SRCS:.cpp=.o)

HEADER = Animal.hpp Cat.cpp Dog.cpp WrongCat.hpp WrongAnimal.hpp

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