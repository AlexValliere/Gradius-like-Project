# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/07 11:47:18 by alex              #+#    #+#              #
#    Updated: 2015/01/11 15:11:19 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_retro
CC			= g++
CFLAGS		= -Wall -Werror -Wextra
LIBS 		= -lncurses
RM			= rm -rf

SRC			=	sources/AMobileEntity.class.cpp \
				sources/AShip.class.cpp \
				sources/DebugEntity.class.cpp \
				sources/EnnemyShip.class.cpp \
				sources/Map.class.cpp \
				sources/PlayerShip.class.cpp \
				sources/Projectile.class.cpp \
				sources/main.cpp

OBJ			= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(LIBS)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

.PHONY:		all clean re fclean