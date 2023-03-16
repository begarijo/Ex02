/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:14:21 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/16 12:24:43 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

/*To display the whole str in reverse words, we need to start at the end of it,
 * and write word by word, moving backward in the str.
 *
 * To control the spac/tabs, it's important to know that the first word, which is
 * going to be the last one, DOES'NT have a spac/tab, so if we reach
 * the start of the str again, it can not display an space.*/

void	rev_wstr(char *s)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		while (is_space(s[i]) || s[i] == '\0')
			i--;
		end = i;
		while (!is_space(s[i]) && s[i] != '\0')
			i--;
		start = i + 1;
		while (start <= end)
		{
			write(1, &s[start], 1);
			start++;
		}
		if (i > 0)
			write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
}
