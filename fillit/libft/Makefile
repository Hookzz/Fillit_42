# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:57:20 by jlarrieu          #+#    #+#              #
#    Updated: 2018/11/23 03:29:03 by jlarrieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = @gcc -c

AR = @ar rc

RM = @rm -f

FLAGS = -Werror -Wall -Wextra

NAME = libft.a

SRCS =	ft_memdel.c \
		ft_bzero.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memalloc.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putendl.c \
		ft_strcmp.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_strncmp.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strjoin.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strsub.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strmap.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_lstnew.c \
		ft_lstmap.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_count_words.c \
		ft_lst_rev.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_lst_last.c \
		ft_lstiter.c

OBJECTS = $(SRCS:.c=.o)

HEADERS_FOLDER = includes/

all:    $(NAME)

$(NAME):
		$(CC) $(FLAGS) $(SRCS)
		$(AR) $(NAME) $(OBJECTS)

clean:
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all