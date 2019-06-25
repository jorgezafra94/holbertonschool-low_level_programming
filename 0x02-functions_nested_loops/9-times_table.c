#include "holberton.h"
/**
 * times_table  - give you the multiplication table
 *
 * Return : 0 success
 */
void times_table(void)
{
	int x, y, z;
	int dec, uni;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (y > 0)
			{
				if ((z / 10) >= 1)
				{
					dec = z / 10;
					uni = z % 10;
					_putchar(' ');
					_putchar('0' + dec);
					_putchar('0' + uni);
				}
				else
				{
					uni = z % 10;
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + uni);
				}
				if (y != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar('0' + z);
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
