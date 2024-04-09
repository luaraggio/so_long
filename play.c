#include "so_long.h"

void    free_map(t_data *game)
{
	int	i;

	i = 0;
	while (game->map.map[y])
	{
		free(game->map.map[y]);
		i++;
	}
	free(game->map.map);
}

int	exit_game(t_data *game)
{
	free_map(game->map);
	mlx_destroy_image(game->mlx, game->zero_image);
	mlx_destroy_image(game->mlx, game->one_image);
	mlx_destroy_image(game->mlx, game->p_image);
	mlx_destroy_image(game->mlx, game->c_image);
	mlx_destroy_image(game->mlx, game->e_image);
	mlx_destroy_window(game->mlx, game->win);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
	exit(0);
	return (0);
}

void	key_move(t_data *game, int keycode)
{
	if (keycode == D || keycode == ARROW_RIGHT)
	{
		game->x = x + 1;
		d_key(game);
	}
	else if (keycode == A || keycode == ARROW_LEFT)
	{
		game->x = x - 1;
		a_key(game);
	}
	else if (keycode == W || keycode == ARROW_UP)
	{
		game->y = y - 1;
		w_key(game);
	}
	else if (keycode == S || keycode == ARROW_DOWN)
	{
		game->y = y + 1;
		s_key(game);
	}
}
		
static void	press_key(t_data *game, int keycode)
{
	if (keycode == ESC)
		exit_game(game);
	else if (!game->exit_game)
	{
		key_move(game, keycode);
		ft_printf("Actual Movement: %d\n", game->moves);
	}
	return (0);
}

void	set_hooks(t_data *game)
{
	mlx_hooks(game->win, 2, 0, press_key, game);
	mlx_hooks(game->win, 17, 0, exit_game, game);
	mlx_hooks(game->win, 9, 0, put_assets, game);
}
