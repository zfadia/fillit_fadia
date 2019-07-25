/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 00:11:17 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/04 03:06:45 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t i2;

    i = 0;
    i2 = 0;
    while (s[i] != '\0')
    {
         i2 = 0;
         while (reject[i2] != '\0')
        {
            if (s[i] == reject[i2])
                return(i);
            i2++;
        }
        i++;
    }
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
int main ()
{
    printf("[%zu\n]", ft_strcspn("fadia","hwfejwhwkl"));
    printf("[%zu\n]", strcspn("fadia","hwfejwhwkl"));
    return(0);
}