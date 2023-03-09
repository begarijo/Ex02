/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:21:26 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/09 18:28:08 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	int	flag;

	if (argc > 1 && argv[1][0] != '\0')
	{
		i = 0;
		while (is_space(argv[1][i]))
			i++;
		start = i;/*Aquí empieza el str*/
		while (argv[1][i] != '\0' && !is_space(argv[1][i]))
			i++;
		end = i; /*Termina la primera palabra*/
		while (is_space(argv[1][i]))
			i++;
		/*Volvemos a saltarnos los espacios*/
		while (argv[1][i] != '\0')
		{
			while (is_space(argv[1][i]) && is_space(argv[1][i + 1]))
				i++;
			/*Volvemos a quitar espacios de más, para
			 * empezar a escribir el str desde la 2º palabra*/
			if (is_space(argv[1][i]))
				flag = 1;
			write(1, &argv[1][i], 1);
			i++;
		}
		if (flag)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}
