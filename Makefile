# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/07 11:47:18 by alex              #+#    #+#              #
#    Updated: 2015/01/10 16:22:20 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= exec
CC			= g++
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -rf

SRC			=	sources/AMobileEntity.class.cpp \
				sources/AShip.class.cpp \
				sources/DebugEntity.class.cpp \
				sources/EnnemyShip.class.cpp \
				sources/PlayerShip.class.cpp \
				sources/Projectile.class.cpp \
				sources/main.cpp

OBJ			= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

.PHONY:		all clean re fclean