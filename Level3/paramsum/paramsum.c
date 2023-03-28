/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:13:20 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 18:19:00 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

/*As the number of args passed to our program is in fact an integer, 
 * we only have to make a putnbr and display it.*/

int	main(int argc, char **argv)
{
	(void)argv;

	if (argc < 2)
		ft_putnbr(0);
	else
		ft_putnbr(argc - 1);
	write(1, "\n", 1);
}
