/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate_ls <mgranate_ls@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:59:14 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/08 20:48:41 by mgranate_ls      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# define screenW				1280
# define screenH				720
# define SIZE_X					64
# define SIZE_Y					64
# define WALLCOLORX				0xDBACD4
# define DOORCOLOR				0xFFA500
# define CHROMA_REDMASK 		0x24FFCF
# define CHROMA_BLACKMASK		0x02FFCF
# define WHITE					0xFFFFFF
# define DUB_STEP				0.05
# define MOUSE_STEP				4
# define TEX_SIZE				512

# define X_EVENT_KEY_PRESS		2
# define X_EVENT_KEY_RELEASE	3
# define X_EVENT_KEY_EXIT		17
# define x_ON_MOUSEMOVE			6

# if MACKEYMAP == 1
#  define KEY_ESC	53
#  define KEY_W		13
#  define KEY_A		0
#  define KEY_S		1
#  define KEY_D		2
#  define ARROW_LEFT 	123
#  define ARROW_RIGHT	124
# else
#  define KEY_ESC		65307
#  define KEY_W			119
#  define KEY_A 		97
#  define KEY_S 		115
#  define KEY_D 		100
#  define ARROW_UP 		65362
#  define ARROW_DOWN 	65364
#  define ARROW_LEFT 	65361
#  define ARROW_RIGHT	65363
#  define KEY_SPACE		32
# endif

#endif