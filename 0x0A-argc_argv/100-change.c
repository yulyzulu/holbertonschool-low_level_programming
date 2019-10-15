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

	int i, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	coins = 0;
	while (i > 0)
	{	if (i >= '0' && i <= '9')
		{
			if (i > 25)
			{
				i = i - 25;
			}
			else if (i > 10)
			{
				i = i - 10;
			}
			else if (i > 5)
			{
				i = i -5;
			}
			else if (i > 2)
			{
				i = i - 2;
			}
			else if (i > 1)
			{
				i = i - 1;
			}
		}
		++coins;
		i++;
	}
	printf("%d\n", coins);
	return (0);	
}
