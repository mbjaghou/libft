# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbjaghou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 10:35:35 by mbjaghou          #+#    #+#              #
#    Updated: 2021/11/12 18:13:23 by mbjaghou         ###   ########.fr        #
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
		ft_striteri.c\


SRCBONUS = 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
			ft_lstnew.c ft_lstsize.c


OBJECTS = $(SRC:.c=.o)

OBJE = $(SRCBONUS:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)


clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

bonus: $(OBJECTS) $(OBJE)
	ar rc $(NAME) $(OBJECTS) $(OBJE)

re: fclean all
