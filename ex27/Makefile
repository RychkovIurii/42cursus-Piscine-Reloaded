# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 19:34:06 by irychkov          #+#    #+#              #
#    Updated: 2024/04/07 20:36:03 by irychkov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ./srcs/ft_display_file.c

OBJS	= ${SRC:.c=.o}

HEAD	= ./includes/ft.h

NAME	= ft_display_file

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:	
	${CC} ${CFLAGS} -c -I./includes $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:	
	rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
