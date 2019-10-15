#include <stdio.h>
#include <stdlib.h>
/**
*main- prints the minimum number of coins to make change for an amount of money
*@argc: integer
*@argv: array
*Return: integer
*/
int main(int argc, char *argv[])
{

	int i, coins = 0;

	if (argc == 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (i >= '0' && i <= '9')
			{
				coins = atoi(argv[i]);
			}
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);

}
