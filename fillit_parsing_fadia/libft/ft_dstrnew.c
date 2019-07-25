/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 04:19:30 by zfadia            #+#    #+#             */
/*   Updated: 2019/05/26 04:24:31 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		**ft_dstrnew(size_t size)
{
	char		**s;
	size_t		i;

	if (!(s = (char**)malloc(sizeof(char*) * size + 1)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = 0;
		i++;
	}
	s[i] = 0;
	return (s);
}
