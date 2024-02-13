##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## task01
##

SRC	=	src/main.c \
		src/window.c \
		src/button.c \
		src/bird.c \
		src/error_handling.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

CFLAGS	=	-L lib/my -lmy -I include

CFLAGS2	=	-W -Wall -Wextra

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all: 	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -g -o $(NAME) $(SRC) $(CFLAGS) $(CFLAGS2) $(CSFML)

clean:
	rm -f *.o

fclean:	clean
	rm -f *log
	rm -f *.a
	rm -f $(OBJ)
	rm -f $(wildcard *~)
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
