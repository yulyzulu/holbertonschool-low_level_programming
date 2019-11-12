#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/fcntl.h>
#include <unistd.h>
/**
*create_file- creates a file
*@filename: pointer const char
*@text_content: pointer char
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fil, val1, i;

	if (filename == NULL)
		return (-1);

	fil = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fil == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
	}

	val1 = write(fil, text_content, i);
		if (val1 == -1)
			return (-1);

	close(fil);
	return (1);
}
