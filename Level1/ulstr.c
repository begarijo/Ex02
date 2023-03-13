/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:20:49 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 13:27:25 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*With the firsts two functions, it determines if it's upper or lower case,
 * so in any case we can replace it.*/

int	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

void	ulstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (to_lower(s[i]))
			s[i] += 32;
		else if (to_upper(s[i]))
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
}
