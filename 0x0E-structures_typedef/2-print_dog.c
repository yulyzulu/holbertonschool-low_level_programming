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
	if (d != 0)
	{
		if (d->name == NULL)
		{
			printf("(nil)");
		}
		else
		{
			 printf("Name: %s\n", d->name);
		}
		printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}

	}


}
