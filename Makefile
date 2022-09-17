# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 02:45:29 by tkomeno           #+#    #+#              #
#    Updated: 2022/09/17 13:00:24 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c \
		utils.c

SRCS = $(addprefix srcs/,$(FILES))

OBJS = $(SRCS:.c=.o)

INCLUDES = -I includes

CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

AR = ar -rc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
