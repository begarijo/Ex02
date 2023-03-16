/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:49:08 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/16 14:14:01 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*The spaces are the delimiters of words.*/

int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

/*With this function, we calculate the total lenght of
 * every word is in the str.*/

int	word_len(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (!is_space(s[i]))
		{
			i++;
			len++;
		}
		else
			i++;
	}
	return (len);
}

/*In this one we allocate memmory to copy the word in a new str,
 * and then return it.
 * So we separate the word.*/

char	*get_word(char *s)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != '\0' && !is_space(s[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + i));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && !is_space(s[i]))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/*We allocate memmory enoughht to copy every word,
 * and then return one by one.*/

char	**ft_split(char *str)
{
	int		i;
	char	**split;

	i = 0;
	split = (char **)malloc(sizeof(char *) * (word_len(str) + 1));
	if (!split)
		return (NULL);
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str && !is_space(*str))
		{
			split[i] = get_word(str);
			i++;
		}
		while (*str && !is_space(*str))
			str++;
	}
	split[i] = NULL;
	return (split);
}

#include <stdio.h>

int	main(void)
{
	int		idx;
	char	**tab;
	idx = 0;
	tab = ft_split("prophecy is true");
	while (idx < 3)
	{
		printf("String %d : %s\n", idx, tab[idx]);
		idx++;
	}
	return (0);
}
