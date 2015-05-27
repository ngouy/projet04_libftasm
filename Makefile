#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stherman <stherman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 14:58:54 by stherman          #+#    #+#              #
#    Updated: 2014/11/11 18:07:04 by ngouy            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC			= ~/.brew/bin/nasm
NAME		= libfts.a
EXEC		= main.out

SRC			= \
	   ./Sources/ft_strlen.s\
	   ./Sources/ft_bzero.s\
	   ./Sources/ft_isdigit.s\
	   ./Sources/ft_isalpha.s\
	   ./Sources/ft_isalnum.s\
	   ./Sources/ft_isascii.s\
	   ./Sources/ft_isprint.s\
	   ./Sources/ft_toupper.s\
	   ./Sources/ft_tolower.s\
	   ./Sources/ft_strcat.s\
	   ./Sources/ft_puts.s\
	   ./Sources/ft_memset.s\
	   ./Sources/ft_memcpy.s\
	   ./Sources/ft_strdup.s\
	   ./Sources/ft_cat.s\
\
	   ./Sources/ft_memchr.s\
	   ./Sources/ft_strchr.s\
	   ./Sources/ft_strrchr.s\
	   ./Sources/ft_strndup.s\
	   ./Sources/ft_strnew.s\

OBJ			= $(SRC:.s=.o)

CFLAGS		= -f macho64
OFLAGS		= -O3

RM			= rm -rf


all: $(NAME)

%.o: %.s
	$(CC) $(CFLAGS) $^

$(NAME): $(OBJ)
			ar rc $(NAME) $(OBJ)
			gcc -Wall -Wextra main.c -I ./Includes/ $(NAME) -o $(EXEC)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME) $(EXEC)

re:			fclean all

.PHONY:		all clean re fclean
