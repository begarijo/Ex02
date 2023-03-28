/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:53:05 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/13 12:01:44 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*As the manueal says, this function copys from s2 to s1,
 * including the '\0' character, so it's why we add it in
 * the end.*/

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
