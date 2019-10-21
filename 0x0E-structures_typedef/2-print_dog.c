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
		if (d->owner == NULL)
		{
			printf("(nill)\n");
		}
		else if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}

	}


}
