/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:42:09 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/15 12:02:14 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

/*To pass an int in base 10, to base 16, in case your number is under 16, but also 
 * under 10, is a normal conversion: + '0'. If it's just under 16, it
 * will be "abcdef", so we have to remove de actual base, 10, and add the new one, 'a'.*/

void	print_hex(int n)
{
	if (n >= 16)
	{
		print_hex(n / 16);
		print_hex(n % 16);
	}
	if (n < 10)
	{
		n = n + '0';
		write(1, &n, 1);
	}
	else if (n < 16)
	{
		n = n - 10 + 'a';
		write(1, &n, 1);
	}
}

int	main(int argc, char **argv)
{
	int	n;
	
	if (argc == 2)
	{
		n = short_atoi(argv[1]);
		print_hex(n);
	}
	write(1, "\n", 1);
}
