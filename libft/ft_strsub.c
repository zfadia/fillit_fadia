/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 13:48:53 by zfadia            #+#    #+#             */
/*   Updated: 2019/07/09 05:13:49 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*t;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	i = 0;
	if (!(t = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		t[i] = s[start + i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
