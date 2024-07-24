# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <okoca@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 18:43:34 by okoca             #+#    #+#              #
#    Updated: 2024/07/24 17:49:43 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

DEP_FLAG = -MMD

SRC_FILES = main.cpp ClapTrap.cpp ScavTrap.cpp

INCLUDES = includes

NAME = scavtrap

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
