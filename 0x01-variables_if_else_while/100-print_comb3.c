#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		z = x;
		z++;
		for (y = z ; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			if (!(x == '8' && y == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
