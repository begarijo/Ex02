/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:40:38 by begarijo          #+#    #+#             */
/*   Updated: 2023/02/21 16:57:53 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		l;
	char	tmp;

	i = 0;
	l = 0;
	while (str[l])
		l++;
	while (i < l)
	{
		tmp = str[i];
		str[i] = str[l - 1];
		str[l - 1] = tmp;
		i++;
		l--;
	}
	return (str);
}

int	main()
{
	char	str[13] = "lat euq aloH";
	int		i;
	char	*aux;

	i = 0;
	aux = ft_strrev(str);
	while (aux[i])
	{
		write(1, &aux[i], 1);
		i++;
	}
}
