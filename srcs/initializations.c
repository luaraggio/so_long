#include "../so_long.h"

static void	window_declare(t_data *game)
{
	int	counter;
	int	width;

	width = my_strlen(game->map[0]);
	game->map_width = width * IMAGE_SIZE;
	counter = 0;
	while (game->map[counter])
		counter++;
	game->map_height = counter * IMAGE_SIZE;
}

static void	declare_images(t_data *game)
{
	game->zero_image = mlx_xpm_file_to_image(game->mlx, "images/floor.xpm", &game->image_height, &game->image_width);
	game->one_image = mlx_xpm_file_to_image(game->mlx, "images/wall.xpm", &game->image_height, &game->image_width);
	game->e_image = mlx_xpm_file_to_image(game->mlx, "images/end.xpm", &game->image_height, &game->image_width);
	game->c_image = mlx_xpm_file_to_image(game->mlx, "images/collectable.xpm", &game->image_height, &game->image_width);
	game->p_image = mlx_xpm_file_to_image(game->mlx, "images/player.xpm", &game->image_height, &game->image_width);
}

void	game_init(t_data *game)
{
	game->mlx = mlx_init();
	if (game->mlx == NULL)
	{
		my_printf("Error\nSomething went wrong with image initialization");
		mlx_destroy_display(game->mlx);
		free(game->mlx);
		return ;
	}
	window_declare(game);
	game->win = mlx_new_window(game->mlx, game->map_width, game->map_height, "so_long");
	game->moves = 0;
	game->endgame = 0;
	declare_images(game);
	put_assets(game);
}
