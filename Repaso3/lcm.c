/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:38:22 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/08 16:43:24 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	lcm;

	if (!a || !b)
		return (0);
	if (a > b)
		lcm = a;
	else
		lcm = b;
	while (1)
	{
		if (lcm % a == 0 && lcm & b == 0)
			return (lcm);
		lcm++;
	}
}
