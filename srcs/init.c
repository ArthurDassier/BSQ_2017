/*
** EPITECH PROJECT, 2017
** init.c
** File description:
** blabla
*/

#include "my.h"

char **double_tab(char *buffer)
{
	int	j = 0;
	int	i = 0;
	char	**tab = malloc(sizeof(double) * 20000);

	while (buffer[j] != '\0') {
		tab[i] = malloc(sizeof(double) * 20000);
		for (int count = 0; buffer[j] != '\n'; ++count) {
			tab[i][count] = buffer[j];
			++j;
		}
		++i;
		++j;
	}
	return (tab);
}
