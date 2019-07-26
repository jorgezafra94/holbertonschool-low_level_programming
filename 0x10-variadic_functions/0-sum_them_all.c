#include "variadic_functions.h"
/**
 * sum_them_all - sum all the parameters
 * @n: inputs type const unsigned int
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		va_end(numeros);
		return (0);
	}
	va_start(numeros, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numeros, int);
	}
	va_end(numeros);
	return (sum);

}
