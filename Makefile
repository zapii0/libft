# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/03 11:30:58 by mzapora           #+#    #+#              #
#    Updated: 2024/12/10 15:52:49 by mzapora          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror -c

SRC = ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strlcat.c ft_strlcpy.c \
ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c ft_strchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_atoi.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_split.c

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