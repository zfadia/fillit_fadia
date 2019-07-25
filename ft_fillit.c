/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 22:24:26 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/16 04:11:03 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "fillit.h"
# include "../libft/libft.h"

 char	*ft_strtrime(char const *s)
{
	size_t	min;
	size_t	max;
	size_t	len;

	if (!s)
		return (NULL);
	min = 0;
	while (s[min] != '\0' && (s[min] == '.'))
		min++;
	max = ft_strlen(s);
	while (min < max && (s[max - 1] == '.'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len));
}

char		**tetrimino(char *file)
{
	char	*buf;
	int		i;

	i = 0;
	buf = open_stock(file);
	while (buf[i] == '\n' && buf[i + 1] && buf[i + 1] == '\n')
	{
		i++;
		if (i == 21)
		{
			buf[i] = ' ';
		}
	}
	char **res = ft_strsplit(buf, ' ');
	i = 0;
	char *tmp;
	while (res[i])
	{
		tmp = ft_Strtrime(&res[i]);
		printf("%d\n",(res[i]));
		ft_strdel(res[i]);
		res[i] = tmp;
		printf("%d\n", (res[i]));
	}
	ft_strdel(&buf);
	return (res);
}
int				main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", parsing(argv[1]));

	return (0);
}