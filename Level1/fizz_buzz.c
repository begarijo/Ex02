/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:34:42 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 11:46:20 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*We need the putnbr function to write up the number
 * and if its bigger than 1 digit, to divide it,
 * and make a "conversion" to char*/

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n = n + '0';
		write(1, &n, 1);
	}
}

/*The fizz_buzz can be an independent function, and its better, 
 * but it can be written like this in the main
 * It's important to make the first condition with both modules,
 * because if not, it only displays fizz or buzz.*/

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 9);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
	}
}
