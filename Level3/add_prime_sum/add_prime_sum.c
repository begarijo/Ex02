/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:01:05 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 11:14:21 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}
	return (num);
}

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

/*As it has to be a sum of prime numbers, 
 * this functions checks if it's prime. In other words, if
 * it can't be divided by any other number than itself.*/

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*To add the numbers, meanwhile the number decreases, 
 * if the num is prime, it's added to our 'res'.*/

int	main(int argc, char **argv)
{
	int	n;
	int	res;

	if (argc == 2)
	{
		res = 0;
		n = ft_atoi(argv[1]);
		while (n > 0)
		{
			if (is_prime(n--))
				res += (n + 1);
		}
		ft_putnbr(res);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
}
