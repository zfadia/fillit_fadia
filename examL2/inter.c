/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 02:57:56 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/13 01:00:14 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac == 3)
    {
       while(av[1][i] != '\0')
        {
            j = 0;
            while (av[2][j] != '\0')
            {
                if (av[1][i] == av[2][j])
                {
                     ft_putchar(av[2][i]); 
                     break;
                }
                j++;
            } 
           i++;
        }
    }
    ft_putchar('\n');
    return (0);
}