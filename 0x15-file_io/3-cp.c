#include "main.h"
/**
 * main - main function
 *
 * @argc: arguments count
 * @argv: arguments passed
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, n_written, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'o');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(src, -1, argv[1], 'o');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'w');
	while (n_read == 1024)
	{
		n_read = read(src, buff, sizeof(buff));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], 'o');
		n_written = write(dest, buff, n_read);
		if (n_written == -1)
			check_IO_stat(-1, -1, argv[2], 'w');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'c');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'c');
	return (0);
}

/**
 * check_IO_stat - function that copies the
 * content of a file to another file
 *
 * @stat: Descriptor of the file opened
 * @filename: name of the file
 * @fd: descriptor file
 * @mode: char type
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'c' && stat == -1)
	{
		dprintf(STDERR_FILENO, "ERRor: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'o' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'w' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

