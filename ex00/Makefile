FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
CC = clang++
SOURCES = main.cpp Pony.cpp
NAME = main

$(NAME): $(SOURCES)
	$(CC) $(FLAGS) $(STD) $(SOURCES) -o $(NAME)

test: $(NAME)
	@./$(NAME)

clean:
	rm -f $(NAME)
