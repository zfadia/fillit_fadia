/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 02:25:22 by zfadia            #+#    #+#             */
/*   Updated: 2019/05/25 02:14:48 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	if ((len = ft_strlen(dst)) >= size)
		return (size + ft_strlen(src));
	ft_strncat(dst, src, size - len - 1);
	return (len + ft_strlen(src));
}
