#include "so_long.h"

char	**read_map(char *file)
{
	char	*line;
	char	*map_text;
	char	**finished_map;

	map_text = open(file, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		map_text = ft_strjoin_gnl(map_text, line);
		line = get_next_line(fd);
	}
	free(line);
	finished_map = ft_split(map_text, '\n');
	free(map_text);
	close (fd);
	return (finished_map);
}
