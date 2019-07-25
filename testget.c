/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testget.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 20:50:46 by zfadia            #+#    #+#             */
/*   Updated: 2019/06/18 22:26:30 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int main (int argc, char **argv)
{
    int fd;
    char *line;

    fd = open(argv[1], O_RDONLY);
    printf("%d\n", get_next_line(fd, line));
    printf("\n%s", line);
    return (0);
}