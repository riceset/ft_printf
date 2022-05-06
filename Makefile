# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 02:45:29 by tkomeno           #+#    #+#              #
#    Updated: 2022/05/06 05:02:58 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
EXE = main

CC = gcc
DB = lldb
RM = rm -rf
AR = ar -rc

SRCS = ft_printf.c utils.c
OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(EXE) $(EXE).dSYM

re: fclean all

compile: all
	@$(CC) -g $(EXE).c $(NAME) -o $(EXE)

run: compile
	@./$(EXE)

db: compile
	clear
	$(DB) $(EXE)

norm:
	@norminette -R CheckForbiddenSourceHeader $(SRCS)
	@norminette -R CheckDefine *.h

.PHONY: all clean fclean re compile run db norm
