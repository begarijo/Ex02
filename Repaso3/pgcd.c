/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:48:48 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/08 17:40:02 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	pgcd(int a, int b)
{
	int	f;

	if (a > b)
		f = a;
	else
		f = b;
	while (f != 0)
	{
		if (a % f == 0 && b % f == 0)
			return (f);
		f--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d", pgcd(n1, n2));
	}
	printf("\n");
}
