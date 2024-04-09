# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 13:13:46 by lraggio           #+#    #+#              #
#    Updated: 2024/03/27 20:32:49 by lraggio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
COMPILER = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c\
       map.c\

OBJS = ${SRCS:.c=.o}

INCLUDES = -I/usr/include -Imlx

LIBFT = libft/libft.a
MLX = mlx/libmlx.a

$(LIBFT):
	make -s -C libft

$(MLX):
	make -s -C mlx
.c.o:
	$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDES)

MLX_FLAGS = -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11
 
$(NAME):	$(LIBFT) $(MLX) $(OBJS)
		$(CC) $(CFLAGS) -o $(OBJS) $(LIBFT) $(MLX) $(NAME) $(MLX_FLAGS)
		ar -rcs $(NAME) $(OBJS)
		@echo "Ready to play!"

all: $(NAME)

clean:
	make clean -C libft
	make clean -C mlx

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re:	fclean all

