#include "holberton.h"
/**
 * main - function to create a copy of one file to another
 * @argc: number of arguments in the input
 * @av: store the arguments
 * Return: 0 if success
 */
int main(int argc, char *av[])
{
	char *buffer;
	int x, y, fa, rd, clo1, clo2;

	if (!(argc == 3))
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	x = open(av[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	y = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((rd = read(x, buffer, 1024)) > 0)
	{
		fa = write(y, buffer, rd);
		if (fa == -1)
			exit(99);
	}
	clo1 = close(x);
	clo2 = close(y);
	if (clo1 != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", clo1);
	if (clo2 != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", clo2);
	if (clo1 != 0 || clo2 != 0)
		exit(100);
	free(buffer);
	return (0);
}
