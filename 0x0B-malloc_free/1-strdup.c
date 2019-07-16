#include <stdlib.h>
/**
 * _strdup - create an array using malloc
 * @str: size of the array
 * Return: return a pointer
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int cont, f;

	if (!str)
	{
		return (NULL);
	}
	else
	{
		cont = 0;
		while (*(str + cont) != '\0')
		{
			cont++;
		}
		copy = malloc(cont);
		if (!copy)
		{
			return (NULL);
		}
		else
		{
			for (f = 0; f < cont; f++)
			{
				copy[f] = str[f];
			}
			copy[f] = '\0';
			return (copy);
		}
	}
}
