/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 03:13:02 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/10 00:04:46 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
     if (ac != 2)
     return(0);
        while (av[1][i] !=  '\0')
        {
            i++;
        }
        while ((av[1][i] != ' ' && av[1][i] != '\t') && i > 0 )
        {
                i--;
        }
        j = i;
        while (av[1][j] != '\0')
        {
            ft_putchar(av[1][j + 1]);
            j++;
            i++;
        }
      ft_putchar('\n');
      return(0);
}