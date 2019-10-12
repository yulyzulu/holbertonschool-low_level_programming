#include <stdio.h>
#include <stdlib.h>
/**
*main- multiplies two numbers
*@argc: integer
*@argv: array
*Return: an integer
*/
int main(int argc, char *argv[])
{
	int i, multi = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			multi = multi * atoi(argv[i]);
		}
		printf("%d\n", multi);
		return (0);
	}
	printf("Error\n");
	return (1);
}
