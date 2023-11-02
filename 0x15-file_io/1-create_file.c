#include "main.h"
/**
 * create_file - function that creates a file
 *
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 (success), -1 filename is null
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_descrip;
	int letters_num;
	int rwr;

	if (!filename)
		return (-1);
	file_descrip = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descrip == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters_num = 0; text_content[letters_num]; letters_num++)
		;

	rwr = write(file_descrip, text_content, letters_num);
	if (rwr == -1)
		return (-1);

	close(file_descrip);
	return (1);
}
