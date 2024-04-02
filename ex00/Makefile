# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jv <jv@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 21:47:31 by jv                #+#    #+#              #
#    Updated: 2024/04/01 21:49:34 by jv               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	   	:= g++
NAME   	:= megaphone
CFLAGS 	:= -Wall -Wextra -Werror
STD    	:= -std=c++98 -pedantic
SOURCE 	:= megaphone.cpp

GREEN	:=	\e[92;5;118m
YELLOW	:=	\e[93;5;226m
GRAY	:=	\e[33;2;37m
RESET	:=	\e[0m
CURSIVE	:=	\e[33;3m

.PHONY: all clean re

all: $(NAME)

$(NAME): megaphone.cpp
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	$(CC) $(CFLAGS) $(STD) $(SOURCE) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean:
	rm $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

fclean:
	rm $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: clean all

