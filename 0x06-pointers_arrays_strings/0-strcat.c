#include"main.h"
/**
 * _stract - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_stract(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		j++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

