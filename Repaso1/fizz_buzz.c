/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:50:04 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/06 10:55:23 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	fizz_buzz(int n)
{
	if (n % 3 == 0)
		write(1, "fizz\n", 5);
	else if (n % 5 == 0)
		write(1, "buzz\n", 5);
	else if (n % 3 == 0 && n % 5 == 0)
		write(1, "fizzbuzz\n", 9);
	else
	{
		ft_putnbr(n);
		ft_putchar('\n');
	}
}

int	main()
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		fizz_buzz(n);
		n++;
	}
}
