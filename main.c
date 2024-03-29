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

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	void	*image;

	mlx = mlx_init();
	if (!mlx)
		return (INIT_ERROR);	
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello, Player! (:");
	image = mlx_new_image(mlx, 91, 1080);
	mlx_loop(mlx);
}

/*Keycode function: mlx_key_hook

int	key(int key_code)
{
	ft_printf("%d\n", key_node);
	if (key_code == 65307) // esc
		exit(0);
	return (0);
}
*/

/*Mouse function: mlx_mouse_hook

//x e y: coordenadas x e y do cursor do mouse na janela no momento do evento
//int button: codigo do botao no mouse
// 1: botao esquerdo
// 2: botao do meio
// 3: botao direito

int function (int button, int x, int y, params);
*/

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		
	}
	else
	{
		ft_printf("Error\nYou should choose a valid map.\n");
		return (NULL);
		exit(INVALID_ARG_FORMAT);
	}
}*/
