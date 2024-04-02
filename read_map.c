#include "so_long.h"

/*void	read_map(t_map map)
{
	if (map[x][y] == 1)
	{

	}
	if (map[x][y] == 0)
	{

	}
	if (map[x][y] == 'C')
	{

	}
	if (map[x][y] == 'E')
	{

	}
	if (map[x][y] == 'P')
	{

	}
}*/

void	read_map(t_data *map)
{
	char	*line;
	char	*map_text;
	char	**finished_map;
	//int	count_lines;

	map_text = open(file, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		map_text = ft_strjoin_gnl(map_text, line);
		line = get_next_line(fd);
		//count_lines++;
	}
	finished_map = ft_split(map_text, '\n');
	return(finished_map);
}
