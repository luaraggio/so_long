/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:34:36 by lraggio           #+#    #+#             */
/*   Updated: 2024/03/27 21:03:52 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include "libft/libft.h"
# include "mlx/mlx.h"
# include <stdlib.h>

enum	e_errors
{
	INIT_ERROR -4;

}

enum	e_keys
{
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

typedef struct		s_map
{
	char	**map;
	int	x;
	int	y;
	int	height;
	int	width;
}	t_map;

typedef struct		s_window
{
	void	*mlx;
	void	*mlx_win;
	int	width;
	int	height;
}	t_window;

typedef struct		s_image
{
	t_window	*window;	
	int		width;
	int		height;
}	t_image;

typedef struct		s_data
{
	t_image		*image;
	t_window	*window;
	t_map		*place;

}	t_data;

#endif
