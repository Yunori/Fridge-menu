##
## Makefile for Makefile in /home/mages_i/piscine/C/libmy_01/mages_i
## 
## Made by MAGES Igor
## Login   <mages_i@etna-alternance.net>
## 
## Started on  Fri Oct  3 19:05:14 2014 MAGES Igor
## Last update Fri Oct  3 19:39:55 2014 MAGES Igor
##

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