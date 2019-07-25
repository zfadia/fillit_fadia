/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 03:28:06 by zfadia            #+#    #+#             */
/*   Updated: 2019/06/02 00:51:45 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*v;
	unsigned char	*f;

	v = (unsigned char*)dest;
	f = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		v[i] = f[i];
		if (f[i] == (unsigned char)c)
			return (v + i + 1);
		i++;
	}
	return (NULL);
}
