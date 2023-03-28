/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:30:16 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/15 11:41:47 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*The highest common denominator, or Greatest Common Denominator, is the
 * largest number that divides both numbers with no remainder.
 *
 * So, we have to find the largest number that can divide both numbers, 
 * remains zero, and save it in a new variable, because it can change meanwhile
 * adding numbers (f++).
 *
 * This "factor" can't be greater than any of both parameters.*/

void	pgcd(int a, int b)
{
	int	f;
	int	num;

	f = 1;
	while (f <= a || f <= b)
	{
		if (a % f == 0 && b % f == 0)
			num = f;
		f++;
	}
	printf("%d", num);
}

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		pgcd(n1, n2);
	}
	printf("\n");
}
