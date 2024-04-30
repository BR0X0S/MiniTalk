# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 21:28:26 by oumondad          #+#    #+#              #
#    Updated: 2024/04/30 17:34:51 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server

CNAME = client

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = server.c mini_libft.c

CSRC = 

OBJ = ${SRC:.c=.o}

COBJ = ${CSRC:.c=.o}

all : ${NAME} ${CNAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

${CNAME} : ${COBJ}
	${CC} ${CFLAGS} ${COBJ} -o ${CNAME}

clean :
	rm -rf ${OBJ} ${COBJ}

fclean : clean
	rm -rf ${NAME} ${CNAME}

re : fclean all

.PHONY : clean

.SECONDARY : ${OBJ} ${COBJ}