/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:48:03 by zfadia            #+#    #+#             */
/*   Updated: 2019/04/19 22:13:24 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int size;
	char*dup;

	size = 0;
	while (src[size] != '\0')
		size++;
	dup = malloc(sizeof(char) * (size + 1));
	if (dup == 0)
		return (0);
	size = 0;
	while (src[size] != '\0')
	{
		dup[size] = src[size];
		size++;
	}
	dup[size] = '\0';
	return (dup);
}
