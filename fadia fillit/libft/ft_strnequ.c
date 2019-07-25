/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 21:30:22 by zfadia            #+#    #+#             */
/*   Updated: 2019/05/27 06:03:03 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	size_t j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	while ((s1[i] || s2[i]) && (j == 0) && (i < n))
	{
		if (s1[i] != s2[i])
			j = (s1[i] - s2[i]);
		i++;
	}
	if (j == 0)
		return (1);
	else
		return (0);
}
