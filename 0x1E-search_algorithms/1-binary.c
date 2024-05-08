#include "search_algos.h"

/**
 * binary_search - funct that searches for a value in a sorted array iterative
 * integers using the Binary search algorithm
 * @array:type pointer of given array
 * @size:type size of elements in the array
 * @value:type value to be searched
 * Return:or -1 if value not present
 */
int binary_search(int *array, size_t size, int value)
{
	int a, l, r;

	if (!array)
		return (-1);
	for (l = 0, r = (int)size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (a = l; a < r; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = l + (r - l) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			r = a - 1;
		else
			l = a + 1;
	}
	return (-1);
}
