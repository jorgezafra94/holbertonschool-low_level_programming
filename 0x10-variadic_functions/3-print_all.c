#include "variadic_functions.h"
/**
 * pr_char - print characters
 * @valist: element in the current position of my va_list
 */
void pr_char(va_list valist)
{
	char valor;

	valor = va_arg(valist, int);
	printf("%c", valor);
}
/**
 * pr_int - print integers
 * @valist: element in the current position of my va_list
 */
void pr_int(va_list valist)
{
	int valor;

	valor = va_arg(valist, int);
	printf("%d", valor);
}
/**
 *pr_string - print strings
 *@valist: element in the current position of my va_list
 */
void pr_string(va_list valist)
{
	char *valor;

	valor = va_arg(valist, char *);
	if (valor == NULL)
	{
		valor = "(nil)";
	}
	printf("%s", valor);
}
/**
 *pr_float - print float
 *@valist: element in the current position of my va_list
 */
void pr_float(va_list valist)
{
	double valor;

	valor = va_arg(valist, double);
	printf("%f", valor);
}
/**
 * print_all - print all the element with the specified format
 * @format: tells you what is the format that we are searching for
 */
void print_all(const char * const format, ...)
{
	lista L[] = {
		{'c', pr_char},
		{'i', pr_int},
		{'s', pr_string},
		{'f', pr_float}
	};
	int c1 = 0, c2 = 0, c3 = 0;
	va_list elementos;

	va_start(elementos, format);
	while (format && format[c1] != '\0')
	{
		c2 = 0;
		while (L[c2].c != '\0')
		{
			if (format[c1] == L[c2].c)
			{
				switch (c3)
				{
				case 0:
					break;
				default:
					printf(", ");
				}
				L[c2].fun(elementos);
				c3++;
				break;
			}
			c2++;
		}
		c1++;
	}
	va_end(elementos);
	printf("\n");
}
