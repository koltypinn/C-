
SRC = main.cpp\
	Bureaucrat.cpp\
	Form.cpp\
	ShrubberyCreationForm.cpp\
	RobotomyRequestForm.cpp\
	PresidentialPardonForm.cpp\
	Intern.cpp\

HEADER = Bureaucrat.hpp\
	Form.hpp\
	ShrubberyCreationForm.hpp\
	RobotomyRequestForm.hpp\
	PresidentialPardonForm.hpp\
	Intern.Hpp\
	
OBJ = $(SRC:.cpp=.o)

OBJDIR = objs

DEPS = $(OBJ:.o=.d)

DEPFLAGS = -MMD -MF $(@:.o=.d)

NAME = ex03

CXX = clang++

CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CFLAG) -I./incs $(OBJ) -o $(NAME)
-include $(DEPS)

%.o: %.cpp $(HEADER)
	clang++ $(FLAGS) -I./incs -c $< $(DEPFLAGS) -o $(<:.cpp=.o)

clean:
	rm -rf $(OBJ)
	rm -rf $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re