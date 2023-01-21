# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdetune <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 17:14:50 by bdetune           #+#    #+#              #
#    Updated: 2021/11/29 18:32:10 by bdetune          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	       ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	       ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	       ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCSBONUS =    ${SRCS} ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	       ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	       ft_lstmap.c

OBJS =	       ${SRCS:.c=.o}

OBJSBONUS =    ${SRCSBONUS:.c=.o}

NAME =	       libft.a

CC =	       gcc
INDEX =        ranlib
RM =           rm -rf

CFLAGS =       -Wall -Wextra -Werror -Wshadow -Wpedantic


${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}
		${INDEX} ${NAME}

all:		${NAME}

bonus:		${OBJSBONUS}
		ar rcs ${NAME} ${OBJSBONUS}
		${INDEX} ${NAME}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(OBJS):	libft.h

$(OBJSBONUS):	libft.h

clean:		
		${RM} ${OBJSBONUS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re bonus
