SRCS = ./Animal.cpp \
	./Cat.cpp \
	./Dog.cpp \
	./WrongAnimal.cpp \
	./WrongCat.cpp \
	./main.cpp
CC = clang++
NAME = animal

CFLANG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re