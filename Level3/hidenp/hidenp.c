/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:45:30 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 17:56:34 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Meanwhile both str's exist, only in case they match, it add one 
 * position to s1. If they match completely, and in order, 
 * the s1[j] must have reached it end.
 * So, if s1[j] == '\0', means it matched, so it displays "1",
 * if s1[j] != '\0', or they didn't match, or not in order, 
 * so it displays "0".*/

void	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i] && s1[j])
	{
		if (s1[j] == s2[i])
			j += 1;
		i++;
	}
	if (s1[j] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
}
