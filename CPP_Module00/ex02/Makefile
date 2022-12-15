# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eblondee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 14:52:03 by eblondee          #+#    #+#              #
#    Updated: 2022/11/15 10:06:16 by eblondee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	test.cpp \
		Account.cpp \

OBJS = ${SRCS:.cpp=.o}

NAME = bank

CC = c++

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -std=c++98

.cpp.o:
	${CC} ${CFLAGS} -c $< -o $@

all:	${NAME}

$(NAME):	${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@${RM} ${OBJS}
	@printf "All object were cleaned\n"

fclean: clean
	@${RM} ${NAME}
	@printf "All exectutable were cleaned\n"

re: fclean all

.PHONY: all clean fclean re
