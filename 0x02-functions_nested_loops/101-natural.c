#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, n = 0;

	int x = 1024;

	for (i = 0; i < x; i++)
	{
		if (((i % 5) == 0) || ((i % 3) == 0))
		{
			n = n + i;
		}
	}
	printf("%d\n", n);
	return (0);
}
