NAME = thisisbrain

SRC =	main.cpp

OBJS = $(SRC:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++98 

CC = clang++

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o:	%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: fclean all 
    