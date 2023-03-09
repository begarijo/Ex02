/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:02:38 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/06 12:09:08 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	r;

	i = 0;
	if (argc == 2)
	{
		r = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				r = argv[1][i] - 97;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				r = argv[1][i] - 65;
			while (r >= 0)
			{
				write(1, &argv[1][i], 1);
				r--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
