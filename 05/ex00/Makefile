
SRC = main.cpp\
	Bureaucrat.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = ex00

CXX = clang++

HEADER = Bureaucrat.hpp

CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CXX) $(CFLAG) -c $< -o $@ 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re