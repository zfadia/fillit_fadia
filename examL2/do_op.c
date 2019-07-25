
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 00:15:03 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/02 01:11:29 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

 int main(int ac, char **av)
{
    int nbr1 = atoi(av[1]);
    int nbr3 = atoi(av[3]);  

    if (ac != 4)
    return(0);
    if (av[2][0] == '*')
        printf("%d", nbr1 * nbr3);
    if (av[2][0] == '-')
        printf("%d", nbr1 - nbr3);
    if (av[2][0] == '+')
        printf("%d", nbr1 + nbr3);
    if (av[2][0] == '/')
        printf("%d", nbr1 / nbr3);
    if (av[2][0] == '%')
        printf("%d", nbr1 % nbr3);
    printf("\n");
    return(0);

}
