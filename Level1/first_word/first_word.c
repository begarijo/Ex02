/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:28:12 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 11:34:26 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Checks if theres a space or tab, and returns true or false*/

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

/*Takes the str and ignores the spaces/tabs at the begining
 * Once there's not any space/tab, writes up the char's until
 * there's space/tabs again*/

void	first_word(char *s)
{
	int	i;

	i = 0;
	while (is_space(s[i]))
		i++;
	while (!is_space(s[i]))
	{
		write(1, &s[i], 1);
		i++;
	}
}

/*If there are more, or less than 2 args(a.out & argv[1])
 * and if there's no 2 args it displays \n*/

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
}
