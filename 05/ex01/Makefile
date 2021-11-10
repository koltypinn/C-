
SRC = main.cpp\
	Bureaucrat.cpp\
	Form.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = ex01

CXX = clang++

CFLAG = -Wall -Wextra -Werror -std=c++98

HEADER = Bureaucrat.hpp\
	Form.hpp\

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