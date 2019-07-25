/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 01:29:08 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/01 18:25:45 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(const char *str)
{
    int i;
    int neg;
    int res;

    res = 0;
    neg = 1;
    i = 0;
    while (str[i] == '\t' || str[i] == '\f' || str[i] == '\n'
            || str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
        i++;
   if (str[i] == '-' || str[i] == '+')
    {
      if  (str[i] == '-')
              neg = -1;
      i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10;
        res = res + (str[i] - '0');
        i++;
    }
    return (res * neg);
}

int main(int ac, char **av)
{
    if (ac == 2)
    printf("%d\n", ft_atoi(av[1]));
    return (0);
}