/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:31:24 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/15 12:38:20 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Need it to print numbers*/

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n += '0';
		write(1, &n, 1);
	}
}

/*Need it to opper with integers*/

int	short_atoi(char *s)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = (n * 10) + (s[i] - '0');
		i++;
	}
	return (n);
}

/*The multiplication is between 1-9, so our factor is going to start
 * in 1, and end in 9.*/

void	tab_mult(int n)
{
	int	f;

	f = 1;
	while (f <= 9)
	{
		ft_putnbr(f);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(f * n);
		write(1, "\n", 1);
		f++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc > 1)
	{
		n = short_atoi(argv[1]);
		tab_mult(n);
	}
	else
		write(1, "\n", 1);
}
