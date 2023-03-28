/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:54:04 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/15 16:08:03 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*This takes an int and displays its prime factors.
 * To check if they're primes, n % f must be 0, so if it is, it prints the
 * factor. In case there are more factors, so it's not still the same number,
 * print '*'.
 * */

void	fprime(int n)
{
	int	f;

	f = 2;
	while (n >= f)
	{
		if (n % f == 0)
		{
			printf("%d", f);
			if (f != n)
				printf("*");
			n /= f;
			f = 1;
		}
		f++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		fprime(atoi(argv[1]));
	printf("\n");
}
