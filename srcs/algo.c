/*
** EPITECH PROJECT, 2017
** algo.c
** File description:
** blabla
*/

#include "my.h"

char **init_algo(char **mod_tab)
{
	for(int i = 0; mod_tab[1][i]; ++i) {
		if (mod_tab[1][i] == '.')
			mod_tab[1][i] = '1';
		else
			mod_tab[1][i] = '0';
	}
	for (int j = 1; mod_tab[j]; ++j) {
		if (mod_tab[j][0] == '.' || mod_tab[j][0] == '1')
			mod_tab[j][0] = '1';
		else
			mod_tab[j][0] = '0';
	}
	return (mod_tab);
}

char **anid_algo(char **mod_tab)
{
	for (int i = 2; mod_tab[i]; ++i) {
		for (int j = 1; mod_tab[i][j]; ++j) {
			mod_tab = get_lower(mod_tab, i, j);
		}
	}
	return (mod_tab);
}

char **get_lower(char **mod_tab, int i, int j)
{
	int	first_elm = cti(mod_tab[i - 1][j - 1]);
	int	second_elm = cti(mod_tab[i - 1][j]);
	int	third_elem = cti(mod_tab[i][j - 1]);

	if (mod_tab[i][j] == 'o') {
		mod_tab[i][j] = '0';
		return (mod_tab);
	}
	mod_tab[i][j] = itc(lower(first_elm, second_elm, third_elem));
	return (mod_tab);
}

int lower(int first_elm, int second_elm, int third_elem)
{
	int	nb = first_elm;

	if (second_elm < nb)
		nb = second_elm;
	if (third_elem < nb)
		nb = third_elem;
	if (first_elm < nb)
		nb = first_elm;
	return (nb + 1);
}

char **center(char **tab)
{
	int	i = 1;
	int	j = 0;
	char	**mod_tab = tab;

	mod_tab = init_algo(mod_tab);
	mod_tab = anid_algo(mod_tab);
	while(tab[j])
		printf("%s\n", tab[j++]);
	print_x(tab, mod_tab);
	while (tab[i]) {
		my_printf("%s\n", tab[i]);
		++i;
	}
	return (tab);
}
