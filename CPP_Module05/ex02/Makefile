# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 17:12:11 by eblondee          #+#    #+#              #
#    Updated: 2022/12/10 16:41:54 by eblondee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp \
		Form.cpp \
		Bureaucrat.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \

OBJS = ${SRCS:.cpp=.o}

NAME = Formulaire

CC = c++

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -g -std=c++98

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
