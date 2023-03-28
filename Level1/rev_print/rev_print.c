/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:55:06 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 13:03:32 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*In order to reverse the str in place, we need to calculate
 * the lenght of the str.
 * Once we have it, we need to take one position off, 
 * the one that correspond to '\0'
 * And now, we can display it, from end to start.*/

void	ft_putrev(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putrev(argv[1]);
	write(1, "\n", 1);
}
