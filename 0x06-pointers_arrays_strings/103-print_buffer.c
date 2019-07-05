#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - print the buffer in a specific way
 * @b: buffer
 * @size: size
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i = 0, j, k, m, cont1 = 0, cont2 = 0;

	while (i <= size)
	{
		if ((i % 10) == 0)
		{
			printf("%.8x: ", i);
			for (j = i; j < (10 + i); j = j + 2)
			{
				for (m = 0; m < 2; m++)
				{
					if (cont2 >= size)
						printf("  ");
					else
					{ printf("%.2x", *(b + (j + m)));
						cont2++; }
				}
				printf(" ");
			}
			for (k = i; k < (10 + i); k++)
			{
				if (*(b + k) <= 20 && *(b + k) >= 0)
					printf(".");
				else
					printf("%c", *(b + k));
				cont1++;
				if (cont1 >= size)
					break;
			}
			printf("\n");
		}
		i++;
	}
}
