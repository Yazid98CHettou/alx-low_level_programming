#include"function_pointers.h"
/**
 * int_index - search for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to the fucntion to be used
 * to compare values
 * Return: index tof the first element for which  the cmp
 * if no element mathces fucntion doas not return 0
 * return -1. if size <= 0,
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}

