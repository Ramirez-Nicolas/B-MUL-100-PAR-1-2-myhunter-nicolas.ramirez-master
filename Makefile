##
## EPITECH PROJECT, 2020
## makefile
## File description:
## compile
##

SRCS	=	window_open.c	\
		sources/functions.c	\


NAME    = libmy.a

OBJS    = $(SRCS:.c=.o)

CRITERION = --coverage -lcriterion

CPPFLAGS = -I./includes

CFLAGS += -lcsfml-graphics -lcsfml-window -lcsfml-system

all: $(NAME)

$(NAME):	$(OBJS)
		gcc -o $(NAME) $(SRCS) $(CFLAGS)

clean:
		rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
	rm -f a.out
	rm -f *~

re: fclean all
