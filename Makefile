##
## Makefile for Battleship in /home/etna/piscine/c/battleship/mages_i/my_battleship
## 
## Made by MAGES Igor
## Login   <mqges_i@etna-alternance.net>
## 
## Started on  Sat Oct  4 01:37:14 2014 MAGES Igor
## Last update Fri Nov 14 17:19:30 2014 MAGES Igor
##

CC =	gcc
NAME =	chappie
SRC =	main.c $(wildcard controller/*.c)
OBJ =	$(SRC:%.c=%.o)
RM =	rm -f
LIB =	-L. -lmy

$(NAME):	$(OBJ)
		$(CC) $(OBJ) $(LIB) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

debug:	fclean all
	./$(NAME)