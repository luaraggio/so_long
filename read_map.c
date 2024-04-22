#include "so_long.h"

/*char	**read_map(char *file)
{
	int	fd;
	char	*line;
	char	*map_text;
	char	**finished_map;

	fd = open(file, O_RDONLY);
	line = get_next_line_gnl(fd);
	while (line)
	{
		map_text = ft_strjoin_gnl(map_text, line);
		line = get_next_line_gnl(fd);
	}
	free(line);
	finished_map = ft_split(map_text, '\n');
	free(map_text);
	close (fd);
	return (finished_map);
}*/

char    **read_map(char *path)
{
        int             fd;
        char    *line;
        char    *holder_map;
        char    *holder;
        char    **map;

        fd = open(path, O_RDONLY);
        if (fd == -1)
                return (NULL);
        holder_map = ft_strdup("");
        while (1)
        {
                line = get_next_line_gnl(fd);
                if (!line)
                        break ;
                holder = holder_map;
                holder_map = ft_strjoin(holder, line);
                free(line);
                free(holder);
        }
        map = ft_split(holder_map, '\n');
        free(holder_map);
        close(fd);
        return (map);
}
