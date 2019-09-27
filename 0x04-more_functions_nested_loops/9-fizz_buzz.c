#include <stdio.h>
/**
*
*
*
*/
int main(void)
{
	int a, b, c, d, e;
	b = 3;
	c = 5;


	for (a = 1; a <=100; a++)
	{ 
		d = a % b;
		e = a % c;
		
		if (((a >= b) && (d==0)) && ((a >= e) && (e == 0)))
                {
                        printf("FizzBuzz ");
		}
		else
		{
			if ((a >= b) && (d==0))
			{
				printf("Fizz ");
			}
			else if ((a >= e) && (e == 0))
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", a);
			}
		}
	}
	printf("\n");
	return 0;
}
