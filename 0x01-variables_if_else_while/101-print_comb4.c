#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  x, y, i, z, w;

	for (x = '0'; x <= '9'; x++)
	{
		z = x;
		z++;

		for (y = z ; y <= '9'; y++)
		{
			w = y;
			w++;
			for (i = w ; i <= '9'; i++)
			{
				putchar(x);
				putchar(y);
				putchar(i);
				if (!(x == '7' && y == '8' && i == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
