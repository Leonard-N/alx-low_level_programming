#include "main.h"

/**
 * _2-strchr.c - Entry point
 * @s: string pointed to
 * @c: input
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
