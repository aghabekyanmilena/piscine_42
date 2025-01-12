# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/03 16:55:16 by miaghabe          #+#    #+#              #
#    Updated: 2024/11/05 20:57:13 by miaghabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02


HEADERS = headers.h

SRCS =  rush-02.c \
		major.c \
		open.c \
		others.c \
		prints.c \
		valid.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
