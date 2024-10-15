#include "../so_long.h"

void    free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
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
	if (keycode == KEY_D || keycode == KEY_RIGHT)
	{
		game->x += 1;
		d_key(game);
	}
	else if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		game->x -= 1;
		a_key(game);
	}
	else if (keycode == KEY_W || keycode == KEY_UP)
	{
		game->y -= 1;
		w_key(game);
	}
	else if (keycode == KEY_S || keycode == KEY_DOWN)
	{
		game->y += 1;
		s_key(game);
	}
}

static int	press_key(t_data *game, int keycode)
{
	if (keycode == KEY_ESC || keycode == KEY_Q)
		exit_game(game);
	else if (!game->exit)
	{
		key_move(game, keycode);
		ft_printf("Actual Movement: %d\n", game->moves);
	}
	return (0);
}

void	set_hooks(t_data *game)
{
	mlx_hook(game->win, 2, 1L << 0, press_key, game);
	mlx_hook(game->win, 17, 1L << 17, exit_game, game);
	mlx_hook(game->win, 9, 1L << 21, put_assets, game);
}
