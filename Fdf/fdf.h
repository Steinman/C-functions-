/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 13:29:53 by hcorrale          #+#    #+#             */
/*   Updated: 2016/04/13 16:06:50 by hcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include "mlx.h"
# include "libft/libft.h"

typedef struct		s_var
{
	int				l;
	int				**tab;
	int				err;
	int				len;
}					t_var;

typedef struct		s_point
{
	double			x;
	double			y;
}					t_point;

#endif
