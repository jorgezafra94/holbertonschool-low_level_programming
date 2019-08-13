#include "holberton.h"
/**
 * read_textfile - read the input argument file
 * @filename: name of the file to read
 * @letters: number of letters to read.
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *words;
	int x;
	ssize_t c;

	if (filename == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);

	words = malloc(sizeof(char) * letters);
	if (!words)
		return (0);

	read(x, words, letters);
	words[letters] = '\0';

	for (c = 0; c < (ssize_t)letters && words[c] != '\0'; c++)
		;
	write(STDOUT_FILENO, words, c);

	close(x);
	free(words);
	return (c);
}
