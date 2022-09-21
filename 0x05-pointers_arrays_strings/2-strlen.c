#include "main.h"

/**
 * strlen - returns the length of a string
 * @s: arg points to string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	 int len;

	while (*s != "\0")
	{
		len++;
		s++;
	}

	return (len);
}
