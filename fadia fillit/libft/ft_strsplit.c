/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 09:43:32 by zfadia            #+#    #+#             */
/*   Updated: 2019/06/02 01:25:30 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_count_word(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			j++;
		while (s[i] != c && s[i])
			i++;
	}
	return (j);
}

static int		ft_count_len(char const *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
	{
		i++;
		j++;
	}
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**t;

	if (!s)
		return (NULL);
	if (ft_count_word(s, c) == 0)
		return (ft_dstrnew(0));
	if (!(t = ft_dstrnew(ft_count_word(s, c) + 1)))
		return (NULL);
	j = 0;
	i = ft_count_word(s, c);
	while (j < i)
	{
		if (!(t[j] = ft_strnew(ft_count_len(s, c) + 1)))
			return (NULL);
		while (*s == c)
			s++;
		ft_strncpy(t[j], s, ft_count_len(s, c));
		s += ft_count_len(s, c) + 1;
		j++;
	}
	t[j] = NULL;
	return (t);
}
