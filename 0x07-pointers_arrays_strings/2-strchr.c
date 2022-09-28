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
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
