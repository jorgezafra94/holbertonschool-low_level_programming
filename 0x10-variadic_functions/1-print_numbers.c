#include "variadic_functions.h"
/**
 * print_numbers - print all the numbers followed by a separator
 * @separator: will separate the elements
 * @n: number of elements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list elements;
	unsigned int i;
	int num;

	va_start(elements, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(elements, int);
		if (!(i == (n - 1)))
		{
			if (separator != NULL)
				printf("%d%s", num, separator);
			else
				printf("%d", num);
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
	va_end(elements);
}
