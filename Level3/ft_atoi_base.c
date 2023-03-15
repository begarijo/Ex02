/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:04 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/14 17:28:13 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		num = (num * str_base);
		if (str[i] >= '0' && str[i] <= '9')
			num += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			num += str[i] - 'W';
		else if (str[i] >= 'A' && str[i] <= 'F')
			num += str[i] - '7';
		i++;
	}
	return (num * sign);
}

/*The conversion means:
 *
 * str[i] - '7' = str[i] - 10 + 65
 * 65 = 'A', and -10 is to remove the actual base
 *
 * So, for 'a' is the same : -10 + 97 = 'W'*/

int	main(int argc, char **argv)
{
	int	num;

	if (argc == 3)
	{
		num = ft_atoi_base(argv[1], atoi(argv[2]));
		printf("%d", num);
	}
}
