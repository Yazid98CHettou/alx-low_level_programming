#include"variadic_functions.h"
/**
 * print_number - printd numbers
 * @separtor: string to be printed between numbers
 * @n: number of integers passed to the fucntion
 * Return: no return
 */
void print_numbers(const char *separtor, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		print("%d", va_arg(valist, int));
		if (separtor && i < n -1)
			print("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
