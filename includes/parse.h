/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:27:42 by mgranate_ls       #+#    #+#             */
/*   Updated: 2023/02/18 01:36:11 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include <fcntl.h>
# include <get_next_line.h>
# include <cub3d.h>

typedef struct s_parse	t_parse;

struct s_parse
{
	char	**file;
	char	**path_to_img;
	char	*f_c;
	char	*c_c;
};

t_parse		*parsing(void);
void		parse_file(t_parse *parse);
void		clean_parsing(t_parse *data);
int			get_path_img(t_parse *parse);
void		exit_parse(t_parse *data, int status, char *str);

#endif