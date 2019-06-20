#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		if (x != 'q' && x != 'e')
		{
		putchar(x);
		}
	}

	putchar('\n');

	return (0);
}
