/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:47:32 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 03:10:08 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int      press_key(t_data *game, int keycode)
{
        if (keycode == KEY_ESC)
                exit_game(game);
        else if (!game->exit)
        {
                key_move(game, keycode);
                ft_printf("Actual Movement: %d\n", game->moves);
        }
        return (0);
}

static int	check_extension(char *str)
{
	int	len;
	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	len -= 1;
	if (str[len] == 'r' && str[len - 1] == 'e' && str[len - 2] == 'b'
		&& str[len - 3] == '.')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	game;

	if (argc == 2)
	{
		game.map = read_map(argv[1]);
		if (map_checker(&game) && check_extension(argv[1]))
		{
			game_init(&game);
			//set_hooks(&game);
			mlx_hook(game.win, 2, 0, press_key, &game);
        		mlx_hook(game.win, 17, 0, exit_game, &game);
        		mlx_hook(game.win, 9, 0, put_assets, &game);
			mlx_loop(game.mlx);
		}
		else
		{
			if (game.map)
				free_map(game.map);
			ft_printf("Error\nInvalid Map.");
			return (-1);
		}
	}
	else
        {
                ft_printf("Error\nChoose a valid number of arguments.");
                return (-1);
        }
	return (0);
}
