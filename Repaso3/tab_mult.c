/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:14:48 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/08 18:22:44 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_shortatoi(char *s)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		n = (n * 10) + (s[i] - '0');
		i++;
	}
	return (n);
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
	int n1;
	int	n2;

	if (argc > 1)
	{
		n1 = ft_shortatoi(argv[1]);
		n2 = 1;
		while (n2 <= 9)
		{
			ft_putnbr(n2);
			write(1, " x ", 3);
			ft_putnbr(n1);
			write(1, " = ", 3);
			ft_putnbr(n1 * n2);
			write(1, "\n", 1);
			n2++;
		}
	}
	else
		write(1, "\n", 1);
}
