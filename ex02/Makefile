# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jv <jv@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 21:47:31 by jv                #+#    #+#              #
#    Updated: 2024/04/07 20:11:43 by jv               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	   	:= g++
NAME   	:= account
CFLAGS 	:= -Wall -Wextra -Werror -g -I.
STD    	:= -std=c++98 -pedantic
SOURCE 	:= $(shell find . -type f -name '*.cpp')
OBJECTS := $(SOURCE:.cpp=.o)

GREEN	:=	\e[92;5;118m
YELLOW	:=	\e[93;5;226m
GRAY	:=	\e[33;2;37m
RESET	:=	\e[0m
CURSIVE	:=	\e[33;3m

.PHONY: all clean re

all: $(NAME)

$(NAME): $(OBJECTS)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	$(CC) $(STD) $(OBJECTS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJECTS)
	@printf "$(YELLOW)    - Objects removed.$(RESET)\n"

fclean: clean
	rm $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all

