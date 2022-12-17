#include "main.h"

/**
* _memcpy - copies memory area.
* @dest: char pointer
* @src: char pointer
* @n: unsigned int
*
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > index; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
