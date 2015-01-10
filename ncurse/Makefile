NAME = a

SRC = *.cpp

OBJ = *.o

FLAGS = -Wextra -Werror -Wall

LIBS = -lncurses

CC = g++

RM = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) $(LIBS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all