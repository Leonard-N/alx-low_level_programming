#include "main.h"

/**
 * strlen - returns the length of a string
 *
 * @s: arg s
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != "\0")
	{
		len++;
		s++;
	}

	return (len);
}
