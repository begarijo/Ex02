/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:10:17 by begarijo          #+#    #+#             */
/*   Updated: 2023/02/21 17:27:15 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *s, char c, int n)
{
	while (n >= 0)
	{
		if (s[n] == c)
			return (0);
		n--;
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
		j = 0;
		while (argv[1][i] && argv[2][j])
		{
			if (argv[2][j] == argv[1][i] && check(argv[1], argv[1][i], i - 1))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
