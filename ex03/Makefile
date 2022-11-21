NAME = BSP

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS = Fixed.cpp Point.cpp bsp.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) re fclean clean
