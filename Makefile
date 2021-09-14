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

all: cpobj lib  $(NAME)

lib: $(OBJS)
	cd libft && make obj && cp *.o ../objs/ && cd ..

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(LIBOBJ)*.o

cpobj: $(OBJS)
	cp ./srcs/*.o $(LIBOBJ)

clean:
	$(RM) $(LIBOBJ)*.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

main: 
	gcc main.c $(NAME) $(CFLAGS) 

.PHONY: all clean fclean re lib mvobj main