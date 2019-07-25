/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 07:27:56 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/23 03:49:57 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct	s_parsing
{
	int i;
	int point;
	int htag;
	int n;
}				t_parsing;

/*
**	Parsing
*/
int				parsing(char *file);
char			*open_stock(char *file);
int				verif_point_htag(char *str);
int				line(char *str);
t_parsing		init_struct(void);
int				valid_or_not(char *str);
/*
**	Recuperation
*/
char			**tetrimino(char *file);
char			*ft_strtrime(char const *s);
/*
**	Affichage
*/
void			print_tab(char **str);

#endif
