# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 13:13:46 by lraggio           #+#    #+#              #
#    Updated: 2024/12/13 18:03:04 by lraggio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRCS =	srcs/main.c\
		srcs/initializations.c\
		srcs/handle_map.c\
		srcs/map_verifications.c\
		srcs/play.c\
		srcs/player_movements.c\
		srcs/read_map.c \
		srcs/main.c

OBJS = ${SRCS:.c=.o}

LIBFT = libft/libft.a
MLX = mlx/libmlx.a
MLX_FLAGS = -L/usr/lib/X11 -lXext -lX11

all: $(NAME)

$(LIBFT):
	@make -s -C libft

$(MLX):
	@make -s -C mlx

$(NAME): $(LIBFT) $(MLX) $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(MLX) $(MLX_FLAGS) -o $(NAME)
		@echo "✅ Ready to play!"

clean:
	@make clean -C libft
	@make clean -C mlx
	@rm -rf $(OBJS)
	@echo "📤 Objects deleted"

fclean: clean
	@make fclean -C libft
	@rm -rf $(NAME)
	@echo "📤 Objects deleted"

re:	fclean all

val: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
