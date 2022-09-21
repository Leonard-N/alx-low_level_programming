# include "main.h"

/**
* print_rev - prints a string in reverse
* @s: arg (char *str)
*
* Return: void
*/

void print_rev(char *s)
{
	int z;

	for(z = 0; s[z] != '\0'; z++)
	
	for(--z; z >= 0; --z)
		_putchar(s[z]);

	_putchar('\n');
}
