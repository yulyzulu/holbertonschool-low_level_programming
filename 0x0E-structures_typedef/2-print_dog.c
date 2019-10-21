#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*print_dog- print struct
*@d: pointer
*Return: struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			 printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("(nill)\n");
		}

	}


}
