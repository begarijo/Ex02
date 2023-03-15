/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:32:42 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 17:42:42 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*It depends on the value of start and end.
 * 
 * We need to allocate memory of the size of the diference 
 * between the numbers, and save it in an array of int.
 *
 * Once we have it, depending on the values, we copy the values
 * in our array, and add or remove one to create the range.*/

int	*ft_range(int start, int end)
{
	int	*tab;
	int	size;
	int	i;

	if (start > end)
		size = (start - end);
	else
		size = (end - start);
	tab = (int *)malloc(sizeof(int) * (size + 1));
	if (!tab)
		return (0);
	i = 0;
	while (start >= end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	while (start <= end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int	start;
	int	end;
	int	*tab;
	int	i;

	i = 0;
	start = 5;
	end = -3;
	tab = (int *)malloc(sizeof(int) * (9));
	while (i < 9)
	{
		tab = ft_range(start, end);
		printf("%d\n", tab[i]);
		i++;
	}
}
