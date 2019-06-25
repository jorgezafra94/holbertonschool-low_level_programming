#include "holberton.h"
/**
 * jack_bauer - give you the time from 00:00 to 23:59
 *
 * Return : 0 success
 */
void jack_bauer(void)
{
	int x, y, z, w;

	for (x = '0'; x <= '2'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '5'; z++)
			{
				for (w = '0'; w <= '9'; w++)
				{
					if (!(x == '2' && y > '3'))
					{
						_putchar(x);
						_putchar(y);
						_putchar(':');
						_putchar(z);
						_putchar(w);
						_putchar('\n');
					}
					else
					{
						break;
					}
				}
			}
		}
	}
}
