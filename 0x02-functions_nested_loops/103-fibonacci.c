#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n1 = 1;
	long n2 = 1;

	int i;
	long sum;
	long  aux = 0;

	for (i = 0; i < 50; i++)
	{
		if (!(i == 0))
		{
			sum = n1 + n2;
			n1 = n2;
			n2 = sum;
			if (sum < 4000000)
			{
				if ((sum % 2) == 0)
				{
					aux = aux + sum;
				}
			}
		}
	}
	printf("%ld", aux);
	printf("\n");
	return (0);
}
