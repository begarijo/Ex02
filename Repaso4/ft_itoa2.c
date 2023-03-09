/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:34:18 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/09 12:43:12 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	n_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		num;
	int		len;
	char	*res;

	num = n;
	len = n_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	len--;
	res[len] = '\0';
	if (num == 0)
		res[0] = '0';
	else
	{
		if (num < 0)
		{
			res[0] = '-';
			num *= -1;
		}
		while (num > 0)
		{
			res[len] = (num % 10) + '0';
			num /= 10;
			len--;
		}
	}
	return (res);
}

int	main()
{
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(22229));
	printf("%s\n", ft_itoa(-66));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-55));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(29));
}
