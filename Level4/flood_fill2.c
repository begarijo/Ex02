/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:36:20 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/15 13:37:51 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char c;
	
	c = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = 'F';
	begin.y++;
	if(begin.y < size.y && tab[begin.y][begin.x] == c)
		flood_fill(tab, size, begin);
	begin.y--;
	begin.y--;
	if(begin.y >= 0 && tab[begin.y][begin.x] == c)
		flood_fill(tab, size, begin);
	begin.y++;
	begin.x++;
	if(begin.x < size.x && tab[begin.y][begin.x] == c)
		flood_fill(tab, size, begin);
	begin.x--;
	begin.x--;
	if(begin.x >= 0 && tab[begin.y][begin.x] == c)
		flood_fill(tab, size, begin);
}

#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}

