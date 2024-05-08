#include "search_algos.h"

/**
 * Prototype : int linear_search(int *array, size_t size, int value);
 * linear_search - function that searches for a value
 * in an array of integers.
 * @array: Array with values to compare
 * @size: Size of array
 * @value: value to search
 *
 * Return: index when is founded, -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	int a;

	if (array == NULL)
		return (-1);
	for (a = 0; a < (int)size; a++)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
