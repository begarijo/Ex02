/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:35:44 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/07 10:42:16 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 122 - argv[1][i] + 97;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = 90 - argv[1][i] + 65;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}


/*
 *Así sería haciendo el programa separado por funciones,
  en caso de necesitarla para otra cosa.
 *
 void	alpha_mirror(char *s)
 {
 	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = 122 - s[i] + 97;
		else if (s[i] >=  'A' && s[i] <= 'Z')
			s[i] = 90 - s[i] + 65;
		write(1, &s[i], 1);
		i++;
	}
 }

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
}*/
