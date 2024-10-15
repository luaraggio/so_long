# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 13:13:46 by lraggio           #+#    #+#              #
#    Updated: 2024/10/15 01:40:57 by lraggio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -g

OS := $(shell uname)

ifeq ($(OS), Darwin)
	FRAMEWORKS = -framework Cocoa -framework OpenGL -framework IOKit
endif

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

OS := $(shell uname)

ifeq ($(OS), Darwin)
    MLX = mlx_mac/libmlx42.a
    MLX_FLAGS = -Iinclude -lglfw
else
    MLX = mlx/libmlx.a
	MLX_FLAGS = -L/usr/lib/X11 -lXext -lX11
endif

all: $(NAME)

$(LIBFT):
	make -s -C libft

$(MLX):
	make -s -C mlx

$(NAME): $(LIBFT) $(MLX) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(MLX) $(MLX_FLAGS) $(FRAMEWORKS) -o $(NAME)
		@echo "✅ Ready to play!"

clean:
	make clean -C libft
	make clean -C mlx
	rm -rf $(OBJS)
	@echo "📤 Objects deleted"

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)
	@echo "📤 Objects deleted"

re:	fclean all

val: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
