#include "holberton.h"
/**
 * create_file - create a new file depending if the inputs arguments
 * @filename: will be the name of the file
 * @text_content: will be the text inside the file
 * Return: 1 on success or -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int x, c = 0, fa;

	if (filename == NULL)
		return (-1);

	/*printf("%d, %d\n", O_CREAT, O_WRONLY);*/

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
		text_content = "";

	if (x == -1)
		return (-1);

	while (text_content[c] != '\0')
		c++;

	fa = write(x, text_content, c);
	if (fa == -1)
		return (-1);

	close(x);
	return (1);
}
