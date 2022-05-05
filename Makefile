# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 02:45:29 by tkomeno           #+#    #+#              #
#    Updated: 2022/05/05 09:17:48 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c utils.c
OBJS = $(SRCS:.c=.o)

EXE = main
DSYM = $(EXE).dSYM
DB = lldb
CC = gcc
RM = rm -rf
AR = ar -rc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bclean: fclean
	$(RM) $(EXE) $(DSYM)

bre: bclean run

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

.PHONY: all clean fclean re bclean bre compile run db norm
