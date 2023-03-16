/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:38:10 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/15 17:42:39 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*We only have to apply the function (*f) to each element of the list,
 * so we can use an aux to apply it, but it's not necessary.
 *
 * Meanwhile the list exists, we apply the function to our data, and
 * move to the next node.*/

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list;

	list = begin_list;
	while (list)
	{
		(*f)(list->data);
		list = list->next;
	}
}
