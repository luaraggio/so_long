/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:34:36 by lraggio           #+#    #+#             */
/*   Updated: 2024/04/02 17:09:35 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define IMAGE_SIZE 91
# include <unistd.h>
# include "libft/libft.h"
# include "mlx/mlx.h"
# include <stdlib.h>

// for moving with the keyboard arrows:
enum	e_keys 
{
	ESC = 65307,
	ARROW_UP = 65362,
	W = 119,
	ARROW_DOWN = 65364,
	S = 115,
	ARROW_RIGHT = 65363,
	D = 100,
	ARROW_LEFT = 65361,
	A = 97
};

typedef struct		s_data
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

#endif
