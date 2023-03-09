/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:17:43 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/07 12:18:48 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	int	p;

	p = 1;
	while (p <= n)
	{
		if (p == n)
			return (1);
		p = p * 2;
	}
	return (0);
}
