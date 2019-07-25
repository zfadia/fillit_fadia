/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 22:24:36 by zfadia            #+#    #+#             */
/*   Updated: 2019/04/23 19:51:30 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(int fd, char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		write(fd, &buf[i], 1);
		i++;
	}
}

void	print_file(char *path)
{
	int		size;
	int		fd;
	char	buffer[128];

	fd = open(path, O_RDONLY);
	while ((size = read(fd, buffer, sizeof(buffer))) > 0)
	{
		write(1, buffer, size);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
	}
	else if (argc < 2)
	{
		ft_putstr(2, "File name missing.\n");
	}
	else
	{
		print_file(argv[1]);
	}
	return (0);
}
