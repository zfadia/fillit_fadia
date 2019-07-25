/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 04:14:12 by zfadia            #+#    #+#             */
/*   Updated: 2019/06/30 06:14:47 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char *ft_strrev (char *str)
{
	char a;
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
		j++;
	j--;
	while  (i < j)
	{
		a = str [i];
		str[i] = str[j];
		str[j] = a;
		j--;
		i++;
	}
	return(str);
}

int main(int ac, char **av)
{
	printf("%s", ft_strrev(s));
	return (0);
}

