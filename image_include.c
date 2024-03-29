#include "so_long.h"

int	main(void)
{
	void	*mlx;
	void	*image;
	char	*relative_path = "./test.xpm";
	int	image_width;
	int	image_height;
	
	mlx = mlx_init();
	image = mlx_xpm_file_to_image(mlx, relative_path, &image_width, &image_height);
	if (!image)
	{
		ft_printf("Error.\n");
		ft_printf("Image fault");
		return (0);
	}
	return (image);
}
