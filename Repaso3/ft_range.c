/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:25:10 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/08 16:28:06 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	i = 0;	
	if (start > end)
		tab = (int *)malloc(sizeof(int) * (start - end + 1));
	else
		tab = (int *)malloc(sizeof(int) * (end - start + 1));
	if (!tab)
		return (NULL);
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
	return(tab);
}
