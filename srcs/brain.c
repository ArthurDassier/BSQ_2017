/*
** EPITECH PROJECT, 2017
** brain.c
** File description:
** brain
*/

#include "my.h"

void my_reader(char *file_path)
{
	char		*buffer = malloc(sizeof(double) * 20000);
	int		fd = open(file_path, O_RDONLY);
	struct stat	size;

	stat(file_path, &size);
	read(fd, buffer, size.st_size);
	double_tab(buffer);
	close(fd);
	free(buffer);
}

int main(int argc, char *argv[])
{
	argc += 1;
	my_reader(argv[1]);
	return (0);
}
