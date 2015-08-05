CC	= gcc
RM	= rm -rf
CFLAGS	= -W -Werror -Wall

SRCS	= $(wildcard *.c)
OBJS	= $(SRCS:.c=.o)
NAME	= libmy.a


all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
