#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - alloacate memory
 * @b:amount of bytes
 * Return: pointer to the allocated memory
 * if malloc fails, status values is equal to 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == null)
		exit(98);
	return (p);
}

