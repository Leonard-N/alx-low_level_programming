#include "main.h"

/**
 * _strlen_recursion - returns lenght of a string.
 * @s: char *s.
 *
 * Return: lenght of a string.
 */

int _strlen_recursion(char *s)
{
	if(*s)
	{
		return (1 + _strlen_recursion(s +));
	}
	else
	{
		return (0);
	}
}
