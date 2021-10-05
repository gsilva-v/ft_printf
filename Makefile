NAME = libftprintf.a

CC = gcc

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra

SRCS = ./srcs/ft_printf.c\
		./srcs/ft_inttohex.c\
		./srcs/ft_checkhexa.c\
		./srcs/ft_upperx.c\
		./srcs/ft_lowerx.c\
		./utils/ft_calloc.c\
		./utils/ft_putchar.c\
		./utils/ft_putstr.c\
		./utils/ft_putnbr.c

OBJS =$(SRCS:%.c=%.o)

LIBOBJ = ./tempobjs/

all: clean cpobj $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(LIBOBJ)*.o

cpobj: $(OBJS)	
	mkdir tempobjs
	cp ./srcs/*.o $(LIBOBJ)
	cp ./utils/*.o $(LIBOBJ)

clean:
	$(RM) $(LIBOBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBOBJ)
	$(RM) ./utils/*.o
	$(RM) ./srcs/*.o

re: fclean all

.PHONY: all clean fclean re cpobj