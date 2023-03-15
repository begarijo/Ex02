/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:21:05 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/15 12:31:13 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/*The first LETTER of every word must be in uppercase. The ones that are behind any char 
 * != alpha or spaces remains in lowercase.
 *
 * At first, we change the whole str to lowercase. Once done, if is_alpha and
 * in the previous position there's a space/tab OR it doesn't exist (the first letter)
 * we pass it to uppercase.*/

void	str_capitalizer(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (is_alpha(s[i]) && (is_space(s[i - 1]) || !s[i - 1]))
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
