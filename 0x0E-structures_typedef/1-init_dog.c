#include "dog.h"
/**
*init_dog- inicialize a variable
*@d: pointer
*@name: pointer
*@age: float
*@owner: pointer
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
