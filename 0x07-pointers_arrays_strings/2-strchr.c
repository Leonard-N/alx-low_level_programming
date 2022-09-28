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
	while (s[0] != '\0')
	{
		if (s[0] == c)

			return (s);

		else if (s[1] == c)

			return (s + 1);

		s++;
	}
	return (s + 1);
}
