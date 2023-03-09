/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:42:18 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/08 15:59:48 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_shortatoi(char *s)
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

int	main(int argc, char **argv)
{
	int	num;
	int	res;

	res = 0;
	if (argc == 2)
	{
		num = ft_shortatoi(argv[1]);
		while (num > 0)
		{
			if (is_prime(num--))
				res += (num + 1);
		}
		ft_putnbr(res);
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
}
