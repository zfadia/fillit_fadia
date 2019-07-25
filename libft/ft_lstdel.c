/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 01:24:37 by zfadia            #+#    #+#             */
/*   Updated: 2019/05/25 02:16:52 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	while ((*alst) != NULL)
	{
		tmp = (*alst)->next;
		ft_lstdelone(alst, del);
		free(*alst);
		*alst = tmp;
	}
	*alst = NULL;
}
