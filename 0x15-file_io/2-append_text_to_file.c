/*
 * File: 2-append_text_to_file.c
 * Auth: aicha lahnite
 */

#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, c = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c = 0; text_content[c];)
			c++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	w = write(file, text_content, c);

	if (file == -1 || w == -1)
		return (-1);

	close(file);

	return (1);
}
