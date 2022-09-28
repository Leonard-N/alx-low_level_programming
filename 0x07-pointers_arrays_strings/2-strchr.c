#include "main.h"

/**
 * _strstr - Function that locates a substring.
 * @needle: char pointer
 * @haystack: char pointer
 *
 * Return: s
 */

char *_strchr(char *s, char c);
{
	unsigned char *s;
	unsigned char c;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
