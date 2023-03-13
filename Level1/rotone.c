/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:13:36 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 13:15:41 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
			s[i] += 1;
		else if (s[i] == 'z' || s[i] == 'Z')
			s[i] -= 25;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
}
