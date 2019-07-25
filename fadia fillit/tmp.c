/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 00:13:53 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/22 05:02:32 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fillit.h"

char		*open_stock(char *file)
{
	int		fd;
	int		ret;
	char	*buf;

	fd = open(file, O_RDONLY);
	if (!(buf = ((char*)malloc(sizeof(char) * 550))))
		return (NULL);
	if ((ret = read(fd, buf, 550)) <= 0)
	{
		ft_strdel(&buf);
		close(fd);
		return (NULL);
	}
	buf[ret] = '\0';
	close(fd);
	return (buf);
}

t_parsing		init_struct(void)
{
	t_parsing listbis;

	listbis.n = 0;
	listbis.i = 0;
	listbis.point = 0;
	listbis.htag = 0;
	return (listbis);
}


int			verif_point_htag(char *str)
{
	t_parsing list;

	list = init_struct();
	while (str[list.i] != '\0')
	{
		if (str[list.i] == '.')
			list.point++;
		if (str[list.i] == '#')
			list.htag++;
		if (str[list.i] == '\n')
			list.n++;
		if (str[list.i] != '.' && str[list.i] != '#' && str[list.i] != '\n')
			return (0);
		list.i++;
		if (list.n % 5 == 0 && list.n != 0)
		{
			if (list.point != 12 || list.htag != 4 || list.n != 5)
				return (0);
			list.n = 0;
			list.point = 0;
			list.htag = 0;
		}
	}
	return (1);
}

int			line(char *str)
{
	int	i;
	int	line;
	int	nbr;

	nbr = 0;
	line = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			line++;
			if (!line % 5 == 0 && (nbr != 4 && nbr != 9
						&& nbr != 14 && nbr != 19))
			{
				return (0);
			}
		}
		i++;
		nbr++;
		if (str[i] == '\n' && str[i + 1] == '\n')
		{
			line = line + 2;
			i = i + 2;
			nbr = 0;
		}
	}
	if ((line + 1) % 5 == 0)
		return (1);
	return (0);
}


int				valid_or_not(char *str)
{
	size_t	i;
	size_t	j;
	int		line;

	j = 0;
	i = 0;
	line = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			if (i > 0 && str[i - 1] == '#')
				j++;
			if (str[i + 1] == '#')
				j++;
			if (i > 4 && str[i - 5] == '#')
				j++;
			if (i + 5 < ft_strlen(str) && str[i + 5] == '#')
				j++;
		}
		if (str[i] == '\n')
			line++;
		if (line == 5)
		{
			line = 0;
			if (j < 6 || j > 8)
				return (0);
			j = 0;
		}
		i++;
	}
	return (1);
}

int				parsing(char *file)
{
	char *buf;

	if (file)
	{
		if (!(buf = open_stock(file)))
			return (0);
		if (verif_point_htag(buf) == 0)
		{
			printf("verif_#_.");
		ft_strdel(&buf);
			return (0);
		}
		if (line(buf) == 0)
		{
			printf("line");
			ft_strdel(&buf);
			return (0);
		}
		if (valid_or_not(buf) == 0)
		{
			printf("valid_or_not");
			ft_strdel(&buf);
			return (0);
		}
		return (1);
	}
	return (0);
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
		tmp = ft_strtrime(res[i]);
		ft_strdel(&res[i]);
		res[i] = tmp;
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