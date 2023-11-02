#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: pointer to the file name
 * @letters: number of letters it should read and print
 *
 * Return: 0 when filename null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descrip;
	ssize_t read_len, wri_len;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	file_descrip = open(filename, O_RDONLY);
	if (file_descrip == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file_descrip);
		return (0);
	}
	read_len = read(file_descrip, buff, letters);
	close(file_descrip);

	if (read_len == -1)
	{
		free(buff);
		return (0);
	}
	wri_len = write(STDOUT_FILENO, buff, read_len);
	free(buff);
	if (read_len != wri_len)
		return (0);
	return (wri_len);
}
