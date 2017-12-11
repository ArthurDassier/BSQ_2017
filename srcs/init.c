/*
** EPITECH PROJECT, 2017
** init.c
** File description:
** blabla
*/

#include "my.h"

char **double_tab(char *buffer, int size)
{
	int	j = 0;
	int	i = 0;
	char	**tab = malloc(size);
	int	nb = my_strlen(buffer) / my_getnbr(buffer);

	while (buffer[j] != '\0') {
		tab[i] = malloc(nb);
		for (int count = 0; buffer[j] != '\n'; ++count) {
			tab[i][count] = buffer[j];
			++j;
		}
		++i;
		++j;
	}
	return (tab);
}
