#include "lists.h"
#include <stdio.h>
/**
*startupfun- apply the constructor attribute to startupfun
*/
void startupfun(void) __attribute__ ((constructor));
/**
*startupfun- execute before main()
*/
void startupfun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
