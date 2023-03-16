/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:38:38 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/16 12:53:52 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

/*In first place, let's ignore the first word, and the extra spaces.
 *
 * Once we are at the second word, we can display the str normally,
 * controlling the extra spaces.
 *
 * Then, when it has been displayed normally, with the positions start 
 * and end, we display the first word in last position.
 * IMPORTANT: If our str is only a word with spaces,
 * we have to control the space before the word, so we display ' '
 * manually only if the previous pos it's a char, and the current is
 * a space OR the end of str.*/

void	rostring(char *s)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (is_space(s[i]) && s[i] != '\0')
		i++;
	start = i;
	while (!is_space(s[i]) && s[i] != '\0')
		i++;
	end = i - 1;
	while (s[i] != '\0')
	{
		while (is_space(s[i]) && s[i] != '\0')
			i++;
		while (!is_space(s[i]) && s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		}
		if (!is_space(s[i - 1]) && (is_space(s[i]) || s[i] == '\0'))
			write(1, " ", 1);
	}
	while (start <= end)
	{
		write(1, &s[start], 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	write(1, "\n", 1);
}
