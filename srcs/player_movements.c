#include "../so_long.h"

static void	image_atualization(t_data *game, char key)
{
	mlx_destroy_image(game->mlx, game->p_image);
	if (key == 'd')
		game->p_image = mlx_xpm_file_to_image
			(game->mlx, "images/player.xpm", &game->image_width, &game->image_height);
	else if (key == 'a')
		game->p_image = mlx_xpm_file_to_image
			(game->mlx, "images/player.xpm", &game->image_width, &game->image_height);
	else if (key == 'w')
		game->p_image = mlx_xpm_file_to_image
			(game->mlx, "images/player.xpm", &game->image_width, &game->image_height);
	else if (key == 's')
		game->p_image = mlx_xpm_file_to_image
			(game->mlx, "images/player.xpm", &game->image_width, &game->image_height);
}

void	d_key(t_data *game)
{
	image_atualization(game, 'd');
	if (game->map[game->y][game->x] == 'E' && game->collectibles == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->y][game->x - 1] = '0';
		game->moves++;
		game->endgame = 1;
		put_assets(game);
	}
	else if (game->map[game->y][game->x] == '1'|| game->map[game->y][game->x] == 'E')
		game->x = game->x - 1;
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->y][game->x] == 'C')
			game->collectibles = game->collectibles - 1;
		game->map[game->y][game->x] = 'P';
		game->map[game->y][game->x - 1] = '0';
		game->moves++;
		put_assets(game);
	}
}

void	a_key(t_data *game)
{
	image_atualization(game, 'a');
	if (game->map[game->y][game->x] == 'E' && game->collectibles == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->y][game->x + 1] = '0';
		game->moves++;
		game->endgame = 1;
		put_assets(game);
	}
	else if (game->map[game->y][game->x] == '1'|| game->map[game->y][game->x] == 'E')
		game->x = game->x + 1;
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->y][game->x] == 'C')
			game->collectibles = game->collectibles - 1;
		game->map[game->y][game->x] = 'P';
		game->map[game->y][game->x + 1] = '0';
		game->moves++;
		put_assets(game);
	}

}

void	w_key(t_data *game)
{
	image_atualization(game, 'w');
	if (game->map[game->y][game->x] == 'E' && game->collectibles == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->y + 1][game->x] = '0';
		game->moves++;
		game->endgame = 1;
		put_assets(game);
	}
	else if (game->map[game->y][game->x] == '1'|| game->map[game->y][game->x] == 'E')
		game->y += 1;
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->y][game->x] == 'C')
			game->collectibles -= 1;
		game->map[game->y][game->x] = 'P';
		game->map[game->y + 1][game->x] = '0';
		game->moves++;
		put_assets(game);
	}

}

void	s_key(t_data *game)
{
	image_atualization(game, 's');
	if (game->map[game->y][game->x] == 'E' && game->collectibles == 0)
	{
		mlx_clear_window(game->mlx, game->win);
		game->map[game->y - 1][game->x] = '0';
		game->moves++;
		game->endgame = 1;
		put_assets(game);
	}
	else if (game->map[game->y][game->x] == '1'|| game->map[game->y][game->x] == 'E')
		game->y -= 1;
	else
	{
		mlx_clear_window(game->mlx, game->win);
		if (game->map[game->y][game->x] == 'C')
			game->collectibles -= 1;
		game->map[game->y][game->x] = 'P';
		game->map[game->y - 1][game->x] = '0';
		game->moves++;
		put_assets(game);
	}

}
