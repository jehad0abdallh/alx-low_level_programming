#include "main.h"
/*
 * create_file - to create file.
 * @filename: file name string
 * @text_content: the file content to write
 * Return: file success 1 or -1 fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fp ,count_l, rwr;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (count_l = 0; text_content[count_l ]; count_l++)
		;

	rwr = write(fp, text_content, count_l);

	if (rwr == -1)
		return (-1);

	close(fp);

	return (1);
}
