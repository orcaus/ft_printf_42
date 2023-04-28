NAME = ft_printf.a

SRCS = ft_hexa_min.c ft_hexa_maj.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c\
ft_adre.c 

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f


all:			$(NAME)

$(NAME):		$(OBJS)
			$(CC) $(CFLAGS) -c $(SRCS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
	
.PHONY:			all clean fclean re
