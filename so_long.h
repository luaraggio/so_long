#ifndef SO_LONG_H
# define SO_LONG_H
# define IMAGE_SIZE 91
# include <unistd.h>
# include "libft/libft.h"
# include "mlx/mlx.h"
# include <stdlib.h>
# include <fcntl.h>

// for moving with the keyboard arrows:
# define KEY_ESC 65307
# define KEY_Q 113

# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100

# define KEY_UP 65362
# define KEY_LEFT 65361
# define KEY_DOWN 65364
# define KEY_RIGHT 65363

typedef struct	s_data
{
	void	*mlx;
	void	*win;
	char	**map;
	int	x;
	int	y;
	int	map_height;
	int	map_width;
	int	image_height;
	int	image_width;
	int	collectibles;
	int	player;
	int	exit;
	int	moves;
	int	endgame;
	void	*zero_image;
	void	*one_image;
	void	*p_image;
	void	*c_image;
	void	*e_image;

}	t_data;

void	put_images(t_data *game, void *image, int x, int y);
int	put_assets(t_data *game);
void	game_init(t_data *game);
int	map_checker(t_data *game);
void	free_map(char **map);
int	exit_game(t_data *game);
void	key_move(t_data *game, int keycode);
void	set_hooks(t_data *game);
void	d_key(t_data *game);
void	a_key(t_data *game);
void	w_key(t_data *game);
void	s_key(t_data *game);
char	**read_map(char *file);

#endif
