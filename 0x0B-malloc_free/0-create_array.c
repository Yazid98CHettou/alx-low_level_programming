#include"main.h"
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @c: char to initialize
 * Return:pointer to the array intialized or Null
 */
char *create_array(unsigned int size, char c)
{
	char *a = mallow(size);

	if (size == 0 || a == 0)
		return (0);

	while (size--)
		a[size] = c;
}

