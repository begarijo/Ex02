/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:37:46 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/09 16:15:21 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	end;
	int	start;
	int	flag;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while (argv[1][i] == '\0' || is_space(argv[1][i]))
				i--;
			end = i;
			while (!is_space(argv[1][i]) && argv[1][i] != '\0')
				i--;
			start = i + 1;
			flag = start;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;					
			}
			if (flag)
			{
				write(1, " ", 1);
				flag = 0;
			}
		}
	}
	write(1, "\n", 1);
}
