#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: points to the destination string.
 * @src: ptr source string.
 * @n: number of bites to be concatenated.
 *
 * Return: void.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
