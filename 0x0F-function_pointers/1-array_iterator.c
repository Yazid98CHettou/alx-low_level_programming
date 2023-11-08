#include"function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameters on each element of an array
 * @array: input integer array
 * @size: size of the array
 * @ction: pointer to the function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
