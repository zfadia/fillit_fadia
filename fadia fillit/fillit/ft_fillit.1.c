/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 22:24:26 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/22 04:53:13 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_tab(char **str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putendl(str[i++]);
}

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

char	**tetrimino(char *file)
{
	char	*buf;
	int		i;
	int		j;
	char	**res;
	char	*tmp;

	i = 0;
	buf = open_stock(file);
	while (buf[++i] == '\n' && buf[i + 1] && buf[i + 1] == '\n')
	{
		j = 0;
		while (j < 21)
			j++;
		buf[i] = ' ';
	}
	i = -1;
	res = ft_strsplit(buf, ' ');
	while (res[++i])
	{
		tmp = ft_strtrime(res[i]);
		ft_strdel(&res[i]);
		res[i] = tmp;
	}
	ft_strdel(&buf);
	return (res);
}

int		main(int ac, char **argv)
{
	char	**str;
	int		i;

	printf ("[%d]\n",parsing(argv[1]));
	if (ac == 2)
	{
		if (!parsing(argv[1]))
			return (0);
		str = tetrimino(argv[1]);
		print_tab(str);
	}
	return (0);
}
