/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:58:32 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/09 13:19:45 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	word_len(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (!is_space(str[i]))
			len++;
		i++;
	}
	return (len);
}

char	*get_word(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_space(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_space(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**s;
	int		j;

	j = 0;
	s = (char **)malloc(sizeof(char *) * (word_len(str) + 1));
	if (!s)
		return (NULL);
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str && !is_space(*str))
		{
			s[j] = get_word(str);
			j++;
		}
		while (*str && !is_space(*str))
			str++;
	}
	s[j] = NULL;
	return (s);
}

int	main(void)
{
	int		idx;
	char	**tab;
	idx = 0;
	tab = ft_split("The prophecy is true");
	while (idx < 4)
	{
		printf("String %d : %s\n", idx, tab[idx]);
		idx++;
	}
	return (0);
}
