/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:36:14 by zfadia            #+#    #+#             */
/*   Updated: 2019/05/27 17:35:28 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;
	int j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (j == 0))
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
