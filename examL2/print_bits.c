/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 03:16:33 by zfadia            #+#    #+#             */
/*   Updated: 2019/06/30 04:09:19 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print_bits (unsigned char octet)
{	
	unsigned char i = 1;
	while (i < 255)
	{
		if (octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i = i << ;
	}
}

int main(int ac, char **av)
{
	print_bits(atoi(av[1]));
}
