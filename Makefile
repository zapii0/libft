# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/03 11:30:58 by mzapora           #+#    #+#              #
#    Updated: 2024/12/03 19:27:27 by mzapora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror -c

SRC = ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strlcat.c ft_strlcpy.c \
ft_toupper.c ft_tolower.c ft_strrchar.c

OBJS =	${SRC:.c=.o}

NAME = libft.a

AR = ar rcs

$(NAME): $(OBJS)
	$(AR) $(NAME) -o $(OBJS) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

clean:
	rm -f	$(OBJS)

fclean: clean
	rm -f	$(NAME)

re: fclean	$(NAME)

.PHONY: all clean fclean re