#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * strlen - returns the length of a string
 * @s: arg points to string
 * Description: _strlen its fucntion
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; ++s)
	{
		len++;
	}
	return (len);
}
