/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:02:35 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/15 12:20:55 by begarijo         ###   ########.fr       */
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

/*The last letter must be in uppercase, so we have tpo identify where's the letter
 * with a spac/tab in the next position, or '\0'. It must be a LETTER, because if
 * it's another char, it don't have to be in uppercase, and we will change the char.
 *
 *At first, we pass every char to lower, an then we identify if it's alphabetic(is_alpha),
 and if in the next pos there's a space(is_space).*/

void	rstr_capitalizer(char *s)
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
	while (s[i] != '\0')
	{
		if (!is_space(s[i]) && is_alpha(s[i]) && (is_space(s[i + 1]) || s[i + 1] == '\0'))
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
			rstr_capitalizer(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
