# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 17:12:11 by eblondee          #+#    #+#              #
#    Updated: 2022/11/15 16:03:11 by eblondee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJS = ${SRCS:.cpp=.o}

NAME = Horde

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
