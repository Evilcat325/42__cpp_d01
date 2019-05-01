FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
CC = clang++
SOURCES = main.cpp Pony.cpp
NAME = main

$(NAME):
	$(CC) $(FLAGS) $(STD) $(SOURCES) -o $(NAME)

test: $(NAME)
	@./$(NAME)

clena:
	rm -f $(NAME)
