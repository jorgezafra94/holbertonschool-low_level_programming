#include "holberton.h"
/**
 * print_times_table  - give you the multiplication table conditinated by n
 * @n: input that configure the table
 */
void print_times_table(int n)
{
	int x, y, z, uni, dec, cen;

	if (!(n >= 15 || n <= 0))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				cen = z / 100;
				dec = (z / 10) % 10;
				uni = z % 10;
				if (y > 0)
				{
					_putchar(' ');
					if (!(cen >= 1))
						_putchar(' ');
					if (cen >= 1)
						_putchar('0' + cen);
					if (!(dec >= 1) && !(cen >= 1))
						_putchar(' ');
					if (!(dec >= 1) && (cen >= 1))
						_putchar('0');
					if (dec >= 1)
						_putchar('0' + dec);
					_putchar('0' + uni);

					if (!(y == n))
						_putchar(',');
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
}
