NAME = megaphone

RM = rm -rf

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -Wuninitialized

SRC = megaphone.cpp

O_SRC = $(SRC:.cpp=.o)

BARS := "▰▰▱▱▱▱▱▱▱▱▱ 17%" "▰▰▰▱▱▱▱▱▱▱▱ 23%" "▰▰▰▰▱▱▱▱▱▱▱ 38%" "▰▰▰▰▰▱▱▱▱▱▱ 42%" "▰▰▰▰▰▰▱▱▱▱▱ 51%" \
		"▰▰▰▰▰▰▰▱▱▱▱ 65%" "▰▰▰▰▰▰▰▰▱▱▱ 79%" "▰▰▰▰▰▰▰▰▰▱▱ 87%" "▰▰▰▰▰▰▰▰▰▰ 94%" "▰▰▰▰▰▰▰▰▰▰ 100%" \

all: $(NAME)
	@for bar in $(BARS); do \
		clear; \
		echo "\n\n\n\t\t\t\033[1;31m$$bar\033[0m"; \
		sleep 0.08; \
	done
	clear
	@echo "\n\n\t\t❈────────•✦•❅•✦•───────❈";
	@echo "\t\t\033[1;3;5;32m    LOADING COMPLETED\033[0m";
	@echo "\t\t❈────────•✦•❅•✦•───────❈\n\n";

$(NAME): $(O_SRC)
	$(CC) $(CFLAGS) $(O_SRC) -o $(NAME)

clean:
	$(RM) megaphone.o
	clear

fclean: clean

re: clean all
	clear

go: all
	@./$(NAME)

push: clean
	git add .
	git commit -m "push"
	git push

.PHONY: all clean re push
