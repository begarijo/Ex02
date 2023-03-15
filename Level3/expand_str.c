/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:24:26 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 15:49:58 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

/*First, ignore all the extra spaces/tabs in the beginning.
 * Then, with the rest of the str, control if there's spac, and 
 * write 3 spaces if there's a char in the next position of the str.
 *
 * And last, write all the chars.*/

void	expand_str(char *s)
{
	int	i;

	i = 0;
	while (is_space(s[i]))
		i++;
	while (s[i] != '\0')
	{
		if (is_space(s[i]) && s[i] != '\0')
		{
			if (!is_space(s[i + 1]) && s[i + 1] != '\0')
				write(1, "   ", 3);
			i++;
		}
		if (!is_space(s[i]) && s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
}
