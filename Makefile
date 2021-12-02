# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbjaghou <mbjaghou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 10:35:35 by mbjaghou          #+#    #+#              #
#    Updated: 2021/11/20 22:43:43 by mbjaghou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC =	ft_strnstr.c\
		ft_strncmp.c\
		ft_tolower.c\
		ft_toupper.c    \
		ft_atoi.c \
		ft_memset.c     \
		ft_bzero.c       \
		ft_strdup.c \
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_strlen.c     \
		ft_isdigit.c    \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memcpy.c \
		ft_strlcpy.c    \
		ft_isprint.c    \
		ft_calloc.c     \
		ft_memchr.c     \
		ft_memcmp.c\
		ft_memmove.c\
		ft_strlcat.c\
		ft_split.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putnbr_fd.c\
		ft_putendl_fd.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_itoa.c\
		ft_strtrim.c\
		ft_strmapi.c \
		ft_striteri.c


CC = cc

FLAGS = -Wall -Wextra -Werror

OBJECTS = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
