# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <okoca@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 18:43:34 by okoca             #+#    #+#              #
#    Updated: 2024/07/25 17:04:58 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 -g

DEP_FLAG = -MMD

SRC_FILES = AMateria.cpp Character.cpp MateriaSource.cpp Cure.cpp Ice.cpp main.cpp

INCLUDES = .

NAME = magic

OBJS = ${SRC_FILES:.cpp=.o}

DEP = $(OBJS:%.o=%.d)

%.o: %.cpp
	${CC} ${CFLAGS} ${DEP_FLAG} -I${INCLUDES} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

-include $(DEP)

all: ${NAME}

clean:
	rm -f ${OBJS}
	rm -f ${DEP}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
