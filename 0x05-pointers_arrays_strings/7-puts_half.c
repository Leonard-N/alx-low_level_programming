#include "main.h"

/**
* puts_half - prints a string
* @str: arg *str
*
* Return: string to stdout
*/

void puts_half(char *str)
{
	int l, n;
	
	for (l = 0; str[l] != "\0"; l++)

	if (l % 2 == 0) 
	{
		for (n = l / 2; str[n] != "\0"; n++)
			_putchar(stri[n]);
	}
	else
	{
		for (n = ((l - 1) / 2) + 1; str[n] != "\0"; n++)
			_putchar(str[n]);
	}
	_putchar("\n");
}
