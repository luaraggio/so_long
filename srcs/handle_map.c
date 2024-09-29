/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 03:08:12 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 03:08:13 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_images(t_data *game, void *image, int x, int y)
{
	mlx_put_image_to_window
		(game->mlx, game->win, image, IMAGE_SIZE * x, IMAGE_SIZE * y);
}

static void	put_exit_image(t_data *game, int x, int y)
{
	if (game->collectibles == 0)
        {
		mlx_destroy_image(game->mlx, game->e_image);
		game->e_image = mlx_xpm_file_to_image
			(game->mlx, "images/exit.xpm", &game->image_width, &game->image_height);
        }
	put_images(game, game->e_image, x, y);
}

static void	put_player(t_data *game, void *image, int x, int y)
{
	game->x = x;
	game->y = y;
	put_images(game, image, x, y);
}

int	put_assets(t_data *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == '1')
				put_images(game, game->one_image, x, y);
			else if (game->map[y][x] == '0')
				put_images(game, game->zero_image, x, y);
			else if (game->map[y][x] == 'P')
				put_player(game, game->p_image, x, y);
			else if (game->map[y][x] == 'C')
				put_images(game, game->c_image, x, y);
			else if (game->map[y][x] == 'E')
				put_exit_image(game, x, y);
			x++;
		}
		y++;
	}
	return (0);
}
