/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:46:36 by begarijo          #+#    #+#             */
/*   Updated: 2023/02/22 12:03:27 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (bit * 2) + (octet % 2);
		octet/= 2;
		i--;
	}
	return (bit);
}

int	main()
{
	unsigned char	octet;

	octet = 15;
	printf("%i", reverse_bits(octet));
}
