/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:40:09 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 12:53:30 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*To write the char all the times it's needed, 
 * we need to declare a function that depends on the times
 * we need to write it
 * So, with putchar, adding 'r' to indicate how many times
 * we have to display de char 'c'*/

void	ft_putchar(char c, int r)
{
	while (r >= 0)
	{
		write(1, &c, 1);
		r--;
	}
}

/*The only characters that are repeated are alphabetics, 
 * so we only make conditions for them.
 * Depending on lower or upper case, we have to look for the
 * position that letter is in the "array", and this will be the
 * times we need to display it.
 * In case is another character, we only display it once*/

void	repeat_alpha(char *s)
{
	int	i;
	int r;

	i = 0;
	r = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			r = s[i] - 97;
			ft_putchar(s[i], r);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			r = s[i] - 65;
			ft_putchar(s[i], r);
		}
		else
			write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}
