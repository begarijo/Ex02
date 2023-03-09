/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:20:52 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/09 12:33:59 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	n_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	int		tmp_len;
	char	*res;

	len = n_len(nbr);
	tmp_len = nbr;
	if (nbr < 0)
		tmp_len *= -1;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (tmp_len == 0)
		res[0] = '0';
	len++;
	while (len-- && tmp_len != 0)
	{
		res[len] = (tmp_len % 10) + '0';
		tmp_len = (tmp_len - (tmp_len % 10)) / 10;
	}
	if (nbr < 0)
		res[len] = '-';
	return (res);
}

int	main()
{
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(22229));
	printf("%s\n", ft_itoa(-66));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
}
