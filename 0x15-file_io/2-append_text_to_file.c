#include "holberton.h"
/**
 * append_text_to_file - add content to the end of the specified file
 * @filename: name of the file
 * @text_content: text to insert at the bottom of the file
 * Return: 1 if succeed and -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, c = 0, fa;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	x = open(filename, O_WRONLY | O_APPEND);
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
