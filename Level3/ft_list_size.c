/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:28:36 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 17:32:34 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*The list has to be moved to the next node, using the pointer in the structure.
 * Once the list is at the end, it returns the "times", it moved, which is
 * the size*/

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}
