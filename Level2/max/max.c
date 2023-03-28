/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:44:50 by begarijo          #+#    #+#             */
/*   Updated: 2023/02/22 11:40:37 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	i = 0;
	max = tab[i];
	if (!tab)
		return (0);
	while (len > i)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	main()
{
	int	tab[5];

	tab[0] = 1;
	tab[1] = 255;
	tab[2] = 54;
	tab[3] = 398;
	tab[4] = 400000000;
	printf("%d", max(tab, 5));
}
