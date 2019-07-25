/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laste_word2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 22:30:37 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/10 20:43:41 by zfadia           ###   ########.fr       */
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
    char nbr1[] = "1";
    char nbr2[] = "2";
    char nbr3[] = "3";  
    int i = 0;

    if (ac == 2)
    {
    while (av[1][i] != '\0')
    {
         printf("%s", nbr1);
        i++;
    }
    while ((av[1][i] != ' ' && av[1][i] != '\t') && i > 0)
    {
     printf("%s", nbr2);
        i--;
    }
    while (av[1][i] != '\0')
    {
         printf("%s", nbr3);
        ft_putchar(av[1][i]);
        i++;
    }
    ft_putchar('\n');
      return(0);
    }
}