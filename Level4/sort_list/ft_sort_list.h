/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:10:12 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/16 13:11:17 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SORT_LIST_H
# define FT_SORT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	int				data;
}					t_list;

#endif
