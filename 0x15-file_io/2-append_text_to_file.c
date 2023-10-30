#include "main.h"
/**
 * append_text_to_fil - appends text at the  end of file.
 * @filename: filename string
 * @text_content: text to append'
 * Return: 1 seccess -1 failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, count_l, rwr;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (count_l = 0; text_content[count_l]; count_l++)
			;

		rwr = write(fp, text_content, count_l);

		if (rwr == -1)
			return (-1);
	}

	close(fp);

	return (1);
}
