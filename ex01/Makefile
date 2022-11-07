# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 11:54:51 by mlarra            #+#    #+#              #
#    Updated: 2022/11/03 13:08:00 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01

SRCS	=	main.cpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

.PHONY	:	all clean fclean re

${NAME}	:	${OBJS}
			${CC} ${CFLAFS} ${SRCS} -o ${NAME}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all