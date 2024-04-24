# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 13:13:46 by lraggio           #+#    #+#              #
#    Updated: 2024/04/22 18:45:25 by lraggio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS =	main.c\
	initializations.c\
       	handle_map.c\
	map_verifications.c\
	play.c\
	player_movements.c\
	read_map.c	

OBJS = ${SRCS:.c=.o}

LIBFT = libft/libft.a
MLX = mlx/libmlx.a

MLX_FLAGS = -L/usr/lib/X11 -lXext -lX11

all: $(NAME)

$(LIBFT):
	make -s -C libft

$(MLX):
	make -s -C mlx

$(NAME): $(LIBFT) $(MLX) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(MLX) $(MLX_FLAGS) -o $(NAME)
		@echo "Ready to play!"

clean:
	make clean -C libft
	make clean -C mlx
	rm -rf $(OBJS)

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re:	fclean all
