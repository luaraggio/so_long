NAME = libft.a
COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror -I.
SRCS =		my_isalpha.c\
		my_isdigit.c\
		my_isalnum.c\
		my_isascii.c\
		my_isprint.c\
		my_strlen.c\
		my_memset.c\
		my_bzero.c\
		my_memcpy.c\
		my_memmove.c\
		my_strlcpy.c\
		my_strlcat.c\
		my_toupper.c\
		my_tolower.c\
		my_strchr.c\
		my_strrchr.c\
		my_strncmp.c\
		my_memchr.c\
		my_memcmp.c\
		my_strnstr.c\
		my_atoi.c\
		my_calloc.c\
		my_strdup.c\
		my_substr.c\
		my_strjoin.c\
		my_strtrim.c\
		my_split.c\
		my_itoa.c\
		my_strmapi.c\
		my_striteri.c\
		my_putchar_fd.c\
		my_putstr_fd.c\
		my_putendl_fd.c\
		my_putnbr_fd.c\
		my_itoa_base.c\
		my_print_char.c\
		my_print_decimal.c\
		my_printf.c\
		my_print_hexa.c\
		my_print_pointer.c\
		my_print_string.c\
		my_print_un.c\
		my_utoa_base.c\
		get_next_line.c\
		get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

RM = rm -rf

all:	$(NAME)

$(NAME):	$(OBJS)
		ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
