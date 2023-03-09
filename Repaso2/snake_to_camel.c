/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:15:31 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/07 15:17:58 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snake_to_camel(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '_')
		{
			i++;
			s[i] -= 32;
		}
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		snake_to_camel(argv[1]);
	}
	write(1, "\n", 1);
}
