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
	int	count = 0;
	char	**tab = malloc(sizeof(char *) * (size + 1));
	int	nb = 0;

	nb = my_strlen(buffer) / my_getnbr(buffer);
	while (buffer[j] != '\0') {
		tab[i] = malloc(sizeof(char) * nb);
		for (count = 0; buffer[j] != '\n'; ++count) {
			tab[i][count] = buffer[j];
			++j;
		}
		tab[i][count] = '\0';
		++i;
		++j;
	}
	tab[i] = 0;
	return (tab);
}
