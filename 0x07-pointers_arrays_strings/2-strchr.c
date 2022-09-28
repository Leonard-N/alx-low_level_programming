#include "main.h"

/**
 * _strchr - Function that locates a substring.
 * @s: string pointer.
 * @c: char variable c.
 *
 * Return: s
 */

char *_strchr(char *s, char c);
{
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
