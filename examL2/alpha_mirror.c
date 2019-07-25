/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 19:43:25 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/01 22:42:16 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    char lettre;

    i = 0;
    lettre = 0;
    if (ac == 2)
    {
    while (av[1][i] != '\0')
    {
        if (av[1][i] >= 97 && av[1][i] <= 122)
        {
            lettre = 'z' - av[1][i] + 'a';
            ft_putchar(lettre);
        if (av[1][i] >= 65 && av[1][i] <= 90)
        {
            lettre = 'Z' - av[1][i] + 'A';
            ft_putchar(lettre);
        }
        i++;
        }
    }
    return(0);
    }
}