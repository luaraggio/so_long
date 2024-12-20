#include "../so_long.h"

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
        holder_map = my_strdup("");
        while (1)
        {
                line = get_next_line_gnl(fd);
                if (!line)
                        break ;
                holder = holder_map;
                holder_map = my_strjoin(holder, line);
                free(line);
                free(holder);
        }
        map = my_split(holder_map, '\n');
        free(holder_map);
        close(fd);
        return (map);
}
