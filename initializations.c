/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:48:04 by lraggio           #+#    #+#             */
/*   Updated: 2024/04/02 20:16:03 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	window_declare(t_data *game)
{
	int	counter;
	int	width;
	
	width = ft_strlen(game->map[0]);
	game->map_width = width * IMAGE_SIZE;
	counter = 0;
	while (game->map[counter])
		counter++;
	game->map_height = counter * IMAGE_SIZE;
}

static void	declare_images(t_data *game)
{
	game->zero_image = mlx_xpm_file_to_image(game->mlx, "images/floor.xpm", &game->image_height);
	game->one_image = mlx_xpm_file_to_image(game->mlx, "images/wall.xpm", &game->image_height);
	game->e_image = mlx_xmp_file_to_image(game->mlx, "images/end.xpm", &game->image_height);
	game->c_image = mlx_xmp_file_to_image(game->mlx, "images/collectable.xpm", &game->image_height);
	game->p_image = mlx_xmp_file_to_image(game->mlx, "images/player.xpm", &game->image_height);
}

void	game_init(t_data *game)
{
	game->mlx = mlx_init();
	if (mlx == NULL)
	{
		ft_printf("Error\nSomething went wrong with image initialization");
		mlx_destroy_display(mlx);
		free(mlx);
		return (-1);
	}
	window_declare(game);
	game->win = mlx_new_window(game->mlx, game->map_width, game->map_height, "so_long");
	game->moves = 0;
	game->endgame = 0;
	declare_images(game);
	map_handle(game);
}
