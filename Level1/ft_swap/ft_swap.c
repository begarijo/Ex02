/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:34:48 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 12:37:03 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*As is only needed to switch the values of the
 * pointers, with a simple int the values are changing*/

int	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
