/*
** EPITECH PROJECT, 2017
** brain.c
** File description:
** brain
*/

#include "my.h"

void my_reader(char *file_path)
{
	char		*buffer = 0;
	char		**tab = 0;
	int		fd = open(file_path, O_RDONLY);
	struct stat	size;

	stat(file_path, &size);
	buffer = malloc(sizeof(char) * size.st_size + 1);
	read(fd, buffer, size.st_size);
	buffer[size.st_size] = '\0';
	tab = double_tab(buffer, size.st_size);
	center(tab);
	close(fd);
	free(buffer);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		my_reader(argv[1]);
	else
		return(84);
	return (0);
}
