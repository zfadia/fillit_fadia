/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:45:11 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/02 23:23:33 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

char    *ft_strdup(char *src)
{
    int i;
    char *dup;

    i = 0;
    if (!(dup = (char *)malloc (sizeof(char) * ft_strlen(src) + 1)))
        return (NULL); 
    while (src != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
    printf("%s\n", ft_strdup(av[1]));
    }
    return(0);
}
