NAME = Karen
SRC = main.cpp Karen.cpp
HEADER = Karen.hpp
#DBG = -g -fsanitize=address


all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	clang++ $(DBG) -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(SRC)

clean:
	rm -fr $(NAME)

fclean: clean

re: clean all
