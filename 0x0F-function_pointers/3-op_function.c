#include "3-calc.h"
/**
*op_add- add
*@a: integer
*@b: integer
*Return: add to integers
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub- sub
*@a: integer
*@b: integer
*Return: sub to integers
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul- mul
*@a: integer
*@b: integer
*Return: mul to integers
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div- div
*@a: integer
*@b: integer
*Return: div to integers
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
*op_mod- mod
*@a: integer
*@b: integer
*Return: mod to integers
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
