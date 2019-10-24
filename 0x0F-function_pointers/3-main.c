#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main- performs simple operations
*@argc: int
*@argv: array
*Return: integer operations
*/
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*pointfunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	pointfunc = get_op_func(argv[2]);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	pointfunc(num1, num2);

	result = pointfunc(num1, num2);
	if (result == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", result);
	}

	return (result);
}
