/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:13:36 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/06 18:24:46 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
				write(1, &argv[1][i], 1);
			if ((argv[1][i] == ' ' || argv[1][i] == '\t')
				&& (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t' && argv[1][i + 1] != '\0'))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
