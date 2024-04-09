/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:47:32 by lraggio           #+#    #+#             */
/*   Updated: 2024/03/27 22:04:54 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	check_extension(char *str)
{
	int	len;

	len = ft_strlen(argv[1]) - 1;
	if (str[len] == 'r' && str[len - 1] == 'e' && str[len - 2] == 'b'
		&& str[len - 3] == '.')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc != 2)
	{
		ft_printf("Error\nChoose a valid number of arguments.");
		return (-1);
	}
	else
	{
		game.map = read_map(argv[1]);
		if (map_checker(&game) && check_extension(argv[1]))
		{
			game_init(&game);
			set_hooks(&game);
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
	return (0);
}
