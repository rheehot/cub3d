/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structues.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paikwiki <paikwiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:36:27 by paikwiki          #+#    #+#             */
/*   Updated: 2020/09/25 12:30:23 by paikwiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_STRUCTS_H
# define CUB3D_STRUCTS_H

typedef struct	s_img
{
	void	*ptr;
	int		*data;
	int		size_line;
	int		bpp;
	int		endian;
	int		img_width;
	int		img_height;
}				t_img;

typedef struct	s_param
{
	double	px;
	double	py;
	double	dx;
	double	dy;
	double	m_spd;
	double	r_spd;
	double	pln_x;
	double	pln_y;
}				t_param;

typedef struct	s_info
{
	int		w;
	int		h;
	int		color_c;
	int		color_f;
}				t_info;

typedef struct	s_mlx
{
	void		*ptr;
	void		*win;
	char		**map;
	int			**buf;
	int			**texture;
	t_img		img;
	t_info		info;
	t_param		prm;
}				t_mlx;

typedef struct	s_note
{
	int		c_rd;
	int		is_map;
	int		is_done;
	int		info_r[2];
	int		rgb_ceiling;
	int		rgb_floor;
	char	*info_no;
	char	*info_so;
	char	*info_we;
	char	*info_ea;
	char	*info_s;
	int		player_xy[2];
	char	player_dir;
	int		map_width;
	int		map_height;
}				t_note;

typedef struct	s_raycast_note
{
	double	rd_x;
	double	rd_y;
	double	cam_x;
	int		mx;
	int		my;
	double	side_dx;
	double	side_dy;
	double	delta_dx;
	double	delta_dy;
	double	pp_walld;
	int		st_x;
	int		st_y;
	int		hit;
	int		side;
	int		line_height;
	int		draw_start;
	int		draw_end;
}				t_raycast_note;

#endif