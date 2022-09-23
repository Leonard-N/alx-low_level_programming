#include "main.h"

/**
* strcat - This function append two strings.
* @dest: pointer to destination string.
* @src: pointer to source string.
*
* Return: A pointer to the destination string @dest.
*/

char *strcat(char *dest, const char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
