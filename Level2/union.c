/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:13:43 by begarijo          #+#    #+#             */
/*   Updated: 2023/02/22 12:26:49 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *s, char c, int pos)
{
	int	i;

	i = 0;
	while (pos > i)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (check(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		j = 0;
		i = 0;
		while (argv[2][j])
		{
			if (check(argv[2], argv[2][j], j) && check(argv[1], argv[2][j], i))
				write(1, &argv[2][j], 1);
			j++;
			i++;
		}
	}
	write(1, "\n", 1);
}
