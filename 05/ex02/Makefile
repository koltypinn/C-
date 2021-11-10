
SRC = main.cpp\
	Bureaucrat.cpp\
	Form.cpp\
	ShrubberyCreationForm.cpp\
	RobotomyRequestForm.cpp\
	PresidentialPardonForm.cpp\
	
OBJ = $(SRC:.cpp=.o)

NAME = ex02

CXX = clang++

CFLAG = -Wall -Wextra -Werror -std=c++98

HEADER = Bureaucrat.hpp\
	Form.hpp\
	ShrubberyCreationForm.hpp\
	RobotomyRequestForm.hpp\
	PresidentialPardonForm.hpp\

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