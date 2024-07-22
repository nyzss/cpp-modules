# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <okoca@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 18:43:34 by okoca             #+#    #+#              #
#    Updated: 2024/07/22 09:00:34 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

DEP_FLAG = -MMD

DEP = $(OBJ:%.o=%.d)

SRC_FILES = Account.cpp tests.cpp

NAME = accounting

OBJS = ${SRC_FILES:.cpp=.o}

%.o: %.cpp
	${CC} ${CFLAGS} ${DEP_FLAG} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -I . -o ${NAME}

-include $(DEP)

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
