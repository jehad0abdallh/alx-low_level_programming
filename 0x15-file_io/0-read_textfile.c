#include "main.h"
/*
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: file name as string.
 * @letters: number shoud read
 * Return: the actule number of letters it coud read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t nrd, nwr;
	char *buf;

	fp = open(filename, O_RDONLY);
	if (!filename)
		return (0);
	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fp, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fp);

	free(buf);

	return (nwr);
}
