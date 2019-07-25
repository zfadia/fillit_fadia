/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 04:12:23 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/13 01:00:15 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
    
}

int main(int ac, char **av)
{
    int i;
    int j;
    int bis;

    bis = 0;
    i = 0;
    j = 0;
    if(ac == 3)
    {
        while (av[1][i] != '\0')
        { 
            while (av[2][j] != '\0')
            {
                if (av[1][i] == av[2][j])
                {
                    bis++;
                    break;
                }        
                j++;
            }
            i++;
        }
        if (bis == ft_strlen(av[1]))
            ft_putstr(av[1]);
    }
     ft_putchar('\n');
        return (0);
}