/*
** EPITECH PROJECT, 2017
** brain.c
** File description:
** brain
*/

#include "my.h"

int main(int argc, char const *argv[])
{
	char	*buffer = malloc(sizeof(double) * 10000);
	int	fd = open(argv[1], O_RDONLY);
	int	size = read(fd, buffer, sizeof(double) * 10000);

	buffer[size] = 0;
	write (1, buffer, size);
	close(fd);
	free(buffer);
	return (0);
}
