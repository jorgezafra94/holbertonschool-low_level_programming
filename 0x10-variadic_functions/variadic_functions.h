#ifndef ZETA
#define ZETA
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct op- Struct op
 *
 * @c: The character
 * @fun: The function associated
 */
typedef struct op
{
	char *c;
	void (*fun)(va_list);
} lista;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
