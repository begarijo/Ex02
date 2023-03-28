/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:56:49 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 18:13:05 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*The lowest common multuple is the lowest multiple shared by two nums.
 * So in case of 2 and 3, the lowest is 6.
 * The lcm can be found by looking the multiples of both numbers:
 * 		2 = 2, 4, 6, 8...
 * 		3 = 3, 6, 9, 12...
 * 	Now we choose the LOWEST number in common, 6, that is exactly divisible by
 * 	2 and 3.*/

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	f;

	if (a > b)
		f = a;
	else
		f = b;
	while (f)
	{
		if (f % a == 0 && f % b == 0)
			return (f);
		f++;
	}
	return (0);
}

int	main(void)
{
	printf("%u\n", lcm(2, 3));
	return (0);
}
