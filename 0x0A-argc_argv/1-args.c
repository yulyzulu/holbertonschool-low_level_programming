#include <stdio.h>
/**
*main- prints the number of arguments
*@argc: integer
*@argv: array
*Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", --argc);
	return (0);

}
