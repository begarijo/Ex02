/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:14:34 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 11:24:14 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

/*We have to ignore the extra spaces, and put them manually,
 * by controlling if in this position IS an space, and the next one
 * is a char, or is not '\0'*/

void	epur_str(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		while (is_space(s[i]))
			i++;
		while (!is_space(s[i]) && s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		}
		while (is_space(s[i]) && is_space(s[i + 1]) && s[i + 1] != '\0')
			i++;
		if (is_space(s[i]) && s[i + 1] != '\0')
			write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
}
