/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:14:45 by bcarreir          #+#    #+#             */
/*   Updated: 2023/02/27 09:19:39 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3d.h>

t_cub	*new_cube(void)
{
	static t_cub	data;

	return (&data);
}

int	exit_win(t_cub *cub)
{
	mlx_destroy_window(cub->mlx, cub->win);
	exit(1);
}

int	press_key(int key, t_cub *cub)
{
	(void)cub;
	if (key == KEY_ESC)
		exit_win(cub);
	else if (key == KEY_W)
		w_press(cub);
	else if (key == KEY_A)
		a_press(cub);
	else if (key == KEY_S)
		s_press(cub);
	else if (key == KEY_D)
		d_press(cub);
	else if (key == ARROW_LEFT)
		a_left_press(cub);
	else if (key == ARROW_RIGHT)
		a_right_press(cub);
	return (key);
}

void	my_mlx_pixel_put(t_img *data, int x, int y, int color)
{
	char	*dst;

	dst = (data->addr + (y * data->size_line + x * (data->bpp / 8)));
	*(unsigned int*)dst = color;
}

void	init_raycast_vars(t_cub *cub)
{
	char	**mtx;
	int		x;
    int		y;
	  
	mtx = cub->map.mtx;
    cub->player.fovX = 0;
    cub->player.fovX = 0.66;
	cub->player.dirX = 0;
	cub->player.dirY = 0;
	x = -1;
    while(mtx[++x])
    {
        y = -1;
        while (mtx[x][++y])
        {
            if (mtx[x][y] == 'N' || mtx[x][y] == 'S'
			|| mtx[x][y] == 'E' || mtx[x][y] == 'W')
            {
                cub->player.posX = x;
                cub->player.posY = y;
				if (mtx[x][y] == 'N')
            	    cub->player.dirY = 1;
				else if (mtx[x][y] == 'S')
					 cub->player.dirY = -1;
				else if (mtx[x][y] == 'E')
					 cub->player.dirX = 1;
				else
					 cub->player.dirX = -1;
				return ;
            }
        }
    }
}

int	main(int ac, char **av)
{
	read_file(new_cube(), av[1], ac);
	read_map(new_cube());
	check_map_elements(new_cube());
	create_cube(new_cube());
	return (0);
}
