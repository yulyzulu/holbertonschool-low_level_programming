#include <stdlib.h>
#include "dog.h"
/**
*new_dog- create a new dog
*@name: pointer
*@age: float
*@owner: pointer
*Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k, l;
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	while (name[i] != 0)
		i++;
	while (owner[j] != 0)
		j++;
	p->name = malloc((i + 1) * sizeof(char));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = malloc((j + 1) * sizeof(char));
	if (p->owner ==	NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		p->name[k] = name[k];
	}
	for (l = 0; l <= j; l++)
	{
		p->owner[l] = owner[l];
	}
return (p);
}
