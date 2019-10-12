#include <stdio.h>
#include <stdlib.h>
/**
*main- 
*
*
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{ 
		for (i = 1; i > argc; i++)
		{
		
			if (i >= '0' && i <= '9')
						
			{
				sum = sum + atoi(argv[i]);
				printf("%d\n", sum);
			}
			else if (argv[i] != (i <= '0' && i >'9')
			{
				printf("Error");
				return (1);
	}

}
