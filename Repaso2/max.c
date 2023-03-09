/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:12:21 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/07 13:13:32 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	max;
	int	i;

	i = 0;
	max = tab[i];
	while (i <= len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
