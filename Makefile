# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adietric <adietric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 10:13:50 by adietric          #+#    #+#              #
#    Updated: 2018/11/18 17:11:06 by adietric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
HEADERS = ./
SRCS = ./ft_strlen.c    \
		./ft_strdup.c   \
		./ft_strcpy.c   \
		./ft_strncpy.c  \
		./ft_strcat.c   \
		./ft_strncat.c  \
		./ft_memcpy.c   \
		./ft_memccpy.c  \
		./ft_itoa.c     \
		./ft_bzero.c    \
		./ft_memalloc.c \
		./ft_memdel.c   \
		./ft_strnew.c   \
		./ft_strdel.c   \
		./ft_strclr.c   \
		./ft_striter.c  \
		./ft_striteri.c \
		./ft_strmap.c   \
		./ft_strmapi.c  \
		./ft_strequ.c   \
		./ft_strnequ.c  \
		./ft_strsub.c   \
		./ft_strjoin.c  \
		./ft_strtrim.c  \
		./ft_memmove.c  \
		./ft_memset.c   \
		./ft_memchr.c   \
		./ft_memcmp.c   \
		./ft_strncpy.c  \
		./ft_atoi.c     \
		./ft_strcmp.c   \
		./ft_strncmp.c  \
		./ft_isalnum.c  \
		./ft_isprint.c  \
		./ft_strlcat.c  \
		./ft_strchr.c   \
		./ft_strrchr.c  \
		./ft_strstr.c   \
		./ft_strnstr.c  \
		./ft_isalpha.c  \
		./ft_isdigit.c  \
		./ft_isascii.c  \
		./ft_toupper.c  \
		./ft_tolower.c  \
		./ft_putchar.c  \
		./ft_putstr.c   \
		./ft_putendl.c  \
		./ft_putnbr.c   \
		./ft_putchar_fd.c \
		./ft_putstr_fd.c  \
		./ft_putendl_fd.c \
		./ft_putnbr_fd.c  \
		./ft_strsplit.c   \
		./ft_lstnew.c     \
		./ft_lstdelone.c  \
		./ft_lstdel.c     \
		./ft_lstadd.c     \
		./ft_lstiter.c   \
		./ft_lstmap.c    \

PO = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(PO)

clean:
	rm -rf $(PO)

fclean: clean
	rm -rf $(NAME)

re: fclean all
