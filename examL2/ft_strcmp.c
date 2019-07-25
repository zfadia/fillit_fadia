/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 18:31:52 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/02 01:27:21 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i] != '\0' || s2[j] != '\0')
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else 
            return (s1[i] - s2[j]);            
    }
    return(0);
}

 

int main (int ac, char **av)
{
    if (ac == 3)
    {
    printf("%d\n", cmp(av[1], av[2]));
    return(0);
    } 
}