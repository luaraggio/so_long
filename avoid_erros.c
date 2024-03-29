#include "so_long.h"

int	verify_init(void *mlx)
{
	mlx = mlx_init;
	if (!mlx)
		return (-1);
	mlx_destroy_display(mlx);
	free(mlx);
	return (0);
}
