NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC = ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putunbr_fd.c\
		ft_puthex_fd.c ft_putmem_fd.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re