/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:16:00 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 13:20:33 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*The char 'c' nedds to be contained in the str, to replace it for 'r'
 * If it's not, there's no replace and the str is diplayed as normal*/

void	search_and_replace(char *s, char *c, char *r)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c && !c[1] && !r[1])
			s[i] = r;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
}
