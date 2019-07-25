/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 13:05:20 by zfadia            #+#    #+#             */
/*   Updated: 2019/04/19 22:14:33 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	if (min >= max)
	{
		return (0);
	}
	array = malloc((max - min) * sizeof(int*));
	i = 0;
	while ((min + i) < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
