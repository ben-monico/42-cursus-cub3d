/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:55:20 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/06 16:11:30 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_sprite	t_sprite;
typedef struct s_data	t_data;
typedef struct s_cub	t_cub;
typedef struct s_map	t_map;
typedef struct s_player	t_player;
typedef struct s_dist	t_dist;
typedef struct s_img	t_img;
typedef struct s_wall	t_wall;


typedef struct s_wall
{
	int		width;
	int		height;
	void	*img;
	char	*addr;
	int		bpp;
	int		size_line;
	int		endian;
}	t_wall;


struct		s_img
{
	int		colors[2];
	char	**path;
	t_wall	wall[4];
};

struct		s_data
{
	void	*ptr;
	char	*addr;		
	int		bpp;	
	int		size_line;	
	int		endian;		
	int		width;
	int		height;
	int		ceilingPoint;
	int		floorPoint;
	int		x;
};

struct s_sprite
{
	void		*img;
	t_data		data;
};

struct s_dist
{
	double  raydirY;
    double  raydirX;
	double  sideDistX;
    double  sideDistY;
    double  deltaDistX;
    double  deltaDistY;
	double	fisheyeDist;
	double	wallX;
    int stepX;
    int stepY;
    int mapX;
    int mapY;
	int	wallSideY;
};

struct	s_map
{
	char	**mtx;
	int		player_x;
	int		player_y;
	char	p_orientation;
	int		num_player;
	int		*f_c;
	int		*c_c;
};

struct		s_player
{
	double	posX;
	double	posY;
	double	dirY;
	double	dirX;
	double	fovX;
	double	fovY;
	char	obj_hit;
};

struct s_cub
{
    void		*mlx;
	void		*win;
    int			**map_mtx;
	t_data		render_img;
	t_map		map;
	t_img		img;
	t_player	player;
};

#endif