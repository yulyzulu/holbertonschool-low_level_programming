#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
*read_textfile- reads a text file and prints it to the POSIX standard output
*@filename: pointer const char
*@letters: ssize_t
*Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fil;
	ssize_t val1, val2;

	buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);

	if (filename == NULL)
		return (0);

	fil = open(filename, O_RDONLY);
		if (fil == -1)
			return (0);

	val1 = read(fil, buffer, letters);
		if (val1 == -1)
			return (0);

	val2 = write(STDOUT_FILENO, buffer, val1);
		if (val2 == -1)
			return (0);

	close(fil);
	return (val2);
}
