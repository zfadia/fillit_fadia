/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 00:41:55 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/13 01:00:16 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strcspn (const char * s, const char * rejette)
{
    int  i;
    int res;

    res = 0;
    i = 0;
   
    while (s[i] != '\0')
    {
        res = 0;
        while (rejette[res] != '\0')
        {
            if (s[i] == rejette[res])
                return(i);
                res ++;
        }
        i++;
    }   
    i = 0;
        while (s[i] != '\0')
         i++;
    return (i);
}

 int main(int ac, char **av)
 {
      if (ac == 3)
    {
     printf("%lu\n", ft_strcspn(av[1], av[2]));
     printf("[v]]%lu\n", strcspn(av[1], av[2]));
    }
    return(0);
 }