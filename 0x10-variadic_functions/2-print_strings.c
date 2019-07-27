#include "variadic_functions.h"
/**
 * print_strings - print all the words followed by a separator
 * @separator: will separate the elements
 * @n: number of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list selements;
	unsigned int i;
	char *nom;

	if (n == 0)
	{
		va_end(selements);
		return;
	}
	va_start(selements, n);
	for (i = 0; i < n; i++)
	{
		nom = va_arg(selements, char *);
		if (nom == NULL)
			nom = "(nil)";
		if (!(i == (n - 1)))
		{
			if (separator != NULL)
				printf("%s%s", nom, separator);
			else
				printf("%s", nom);
		}
		else
		{
			printf("%s", nom);
		}
	}
	printf("\n");
	va_end(selements);
}
