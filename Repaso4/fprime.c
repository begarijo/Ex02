/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:10:29 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/09 12:20:17 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int n)
{
	int	f;

	f = 2;
	if (n == 1)
		printf("1");
	while (f <= n)
	{
		if (n % f == 0 && is_prime(f))
		{
			printf("%d", f);
			if (n != f)
				printf("*");
			n /= f;
			f--;
		}
		f++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		fprime(n);
	}
	printf("\n");
}
