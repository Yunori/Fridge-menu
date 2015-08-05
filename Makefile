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
