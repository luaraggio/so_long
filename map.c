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

int	main(int argc, char **argv)
{
	t_map	map;

	map = ft_bzero(&map, sizeof(t_map);
	map_init(&map, argv[1]);
}

void    map_init(t_map *map, char *file)
{
	int	i;

	i = 0;
	map->map = read_map(map);
	map->map[x][y];

}


/*int	is_rectangular(t_map map)
{
	map->x = x;
	map->y = y;
	if (x == y)
		return (1);
	else
		return (0);
}*/
