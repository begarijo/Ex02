/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:42:47 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 17:45:22 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*This one is the same than the ft_range, but in reverse order.*/

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	if (start > end)
		size = (start - end);
	else
		size = (end - start);
	tab = (int *)malloc(sizeof(int) * (size + 1));
	if (!tab)
		return (0);
	while (start >= end)
	{
		tab[i] = end;
		end++;
		i++;
	}
	while (start <= end)
	{
		tab[i] = end;
		end--;
		i++;
	}
	return (tab);
}
