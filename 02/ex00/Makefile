NAME = fixed
SRC = main.cpp Fixed.cpp
#DBG = -g -fsanitize=address


all: $(NAME)

$(NAME): $(SRC)
	clang++ $(DBG) -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
