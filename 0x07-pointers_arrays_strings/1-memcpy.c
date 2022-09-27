#include "main.h"

/**
* _memcpy - copies memory area.
* @dest: char pointer
* @src: char pointer
* @n: unsigned int
*
* Return: dest
*/

char *_memcpy(char *dest, const char *src, unsigned int n);
{
	unsigned int index;
	unsigned char *de_st = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		de_st[index] = source[index];

	return (dest);
}
