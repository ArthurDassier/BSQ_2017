/*
** EPITECH PROJECT, 2017
** draw.c
** File description:
** blabla
*/

#include "my.h"

int get_higher(int mod_tab, int h_value)
{
	if (mod_tab > h_value)
		h_value = mod_tab;
	return(h_value);
}

char **print_x(char **tab, char **mod_tab)
{
	int	h_value = cti(mod_tab[1][0]);

	for (int i = 0; mod_tab[i]; ++i)
		for (int j = 1; mod_tab[i][j]; ++j)
			h_value = get_higher(cti(mod_tab[i][j]), h_value);
	for (int i = 1; mod_tab[i]; ++i)
		for (int j = 0; mod_tab[i][j]; ++j)
			tab = find_sqr(tab, cti(mod_tab[i][j]), h_value, i, j);
	return(tab);
}

char **find_sqr(char **tab, int mod_tab, int h_value, int i, int j)
{
	if (mod_tab == h_value)
		tab = put_x(tab, h_value, i, j);
	else if (mod_tab >= 1 && mod_tab < h_value)
		tab[i][j] = '.';
	else if (mod_tab == 0)
		tab[i][j] = 'o';
	return (tab);
}

char **put_x(char **tab, int h_value, int i, int j)
{
	for (int value = 0; value != h_value; ++value)
		for (int count = 0; count != h_value; ++count)
			tab[i - value][j - count] = 'x';
	return (tab);
}
