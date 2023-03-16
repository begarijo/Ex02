/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:04:28 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/15 17:37:39 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*To pass an int to a str, first we need an auxiliar to calculate
 * the lenght of the str, to allocate memory.
 * Because of we're going to divide it and change the value, we need this auxiliar
 * to work with it later to pass to char.
 *
 * To avoid problems with INT_MIN and INT_MAX, we declare this aux as a long number,
 * and the lenght too.*/

char	*ft_itoa(int nbr)
{
	long		n;
	long		len;
	char		*res;

	n = nbr;
	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len + 1] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n)
	{
		res[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (res);
}

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(1001));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(-2));
	printf("%s\n", ft_itoa(-24));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}
