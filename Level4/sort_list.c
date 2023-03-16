/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:59:40 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/16 13:48:29 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_list.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*It's like sort_int_tab, but considering that these are lists,
 * so to sort, andd restart the list in order to sort the whole list
 * properly, we need a tmp.*/

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*tmp;

	tmp = lst;
	while (lst)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			ft_swap(&lst->data, &lst->next->data);
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
