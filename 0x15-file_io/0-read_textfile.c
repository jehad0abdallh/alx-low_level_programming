#include "main.h"
/*
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: file name as string.
 * @letters: number shoud read
 * Return: the actule number of letters it coud read and print,
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fop;
	ssize_t nrd, nwr;
	char *buf;

	fop = open(filename, O_RDONLY);
	if (!filename || fop == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fop, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fop);

	free(buf);

	return (nwr);
}
