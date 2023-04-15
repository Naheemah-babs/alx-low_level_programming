#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: the text file that is being read
 * @letters: the number of letters that is being read
 * Return: w- the actual number of bytes being read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *readfile;
	ssize_t file;
	ssize_t writ;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	readfile = malloc(sizeof(char) * letters);
	t = read(file, readfile, letters);
	writ = write(STDOUT_FILENO, readfile, t);

	free(readfile);
	close(file);
	return (writ);
}
