#include <stdlib.h>
/**
 * create_array - create an array using malloc
 * @size: size of the array
 * @c:character to initialize the array
 * Return: return a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int cont;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		p = malloc(size);

		if (!p)
		{
			return (0);
		}
		else
		{
			for (cont = 0; cont < size; cont++)
			{
				*(p + cont) = c;
			}
			*(p + cont) = '\0';
			return (p);
		}
	}
}
