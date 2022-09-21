#include "main.h"

/**
* puts2 -  prints characters of a string 
* @str: the output will ba a sting
*
* Return: void
*/

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)

	_putchar(str[i]);
	i++;
	}

	_putchar('\n');
}
