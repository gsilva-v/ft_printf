NAME = libftprintf.a

CC = gcc

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra -g

SRCS = ./srcs/ft_printf.c\
		./srcs/ft_inttohex.c\
		./srcs/ft_checkhexa.c\
		./srcs/ft_upperx.c\
		./srcs/ft_lowerx.c

OBJS =$(SRCS:%.c=%.o)

LIBOBJ = ./objs/

all:clean cpobj lib  $(NAME)

lib: $(OBJS)
	cd libft && make obj && cp *.o ../tempobjs/ && cd ..

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(LIBOBJ)*.o

cpobj: $(OBJS)	
	mkdir tempobjs
	cp ./srcs/*.o $(LIBOBJ)

clean:
	$(RM) $(LIBOBJ)

forceclean:
	$(RM) $(LIBOBJ)
	$(RM) ./libft/*.o
	$(RM) ./srcs/*.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

main: all
	gcc main.c $(NAME) $(CFLAGS) 

.PHONY: all clean fclean re lib mvobj main force clean