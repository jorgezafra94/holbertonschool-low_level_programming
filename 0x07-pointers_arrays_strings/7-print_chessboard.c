#include "holberton.h"
/**
 * print_chessboard - print the matrix
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int i, j, cont = 0;

	while ((a[cont][7]) != '\0')
	{
		cont++;
	}
	for (i = 0; i < cont; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
