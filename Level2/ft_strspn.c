/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:46:10 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 15:48:46 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*We use the same conditions in this one as in strcspn, the difference
 * is that in this function, the return value is the amount of characters that
 * OCCURS in the str*/

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] != accept[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
