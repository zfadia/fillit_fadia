/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 06:26:21 by zfadia            #+#    #+#             */
/*   Updated: 2019/06/21 08:22:55 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_next_line(const int fd, char **line)
{
	static char	*str[OPEN_MAX];
	int			i;
	int			ret;
	char		buf[BUFF_SIZE + 1];
	char		*tmp;

	if ((i = 0) || fd < 0 || fd > OPEN_MAX || !line || BUFF_SIZE < 0
		|| read(fd, buf, 0) || !(str[fd] = str[fd] ? str[fd] : ft_strnew(0)))
		return (-1);
	while ((!ft_strchr(str[fd], '\n') && (ret = read(fd, buf, BUFF_SIZE)) > 0))
	{
		buf[ret] = '\0';
		if (!(tmp = ft_strjoin(str[fd], buf)))
			return (-1);
		free(str[fd]);
		str[fd] = tmp;
	}
	while (str[fd][i] && str[fd][i] != '\n')
		i++;
	*line = str[fd];
	if (!(str[fd] = ft_strdup(str[fd][i] ? str[fd] + i + 1 : str[fd] + i)))
		return (-1);
	ret = (*line)[i] == '\n' ? 1 : 0;
	(*line)[i] = '\0';
	return (ret || i);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd;
	int		ret_value;
	char	*line;

	line = NULL;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	ret_value = 1;
	while (ret_value == 1)
	{
		ret_value = get_next_line(fd, &line);
		printf("%d |>>| %s\n", ret_value, line);
	}
	close(fd);
	return (0);
}
