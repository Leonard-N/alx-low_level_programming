#include "main.h"

/**
* print_rev -  prints a string in reverse
* @s: the output will be string
* Return: void
*/

void print_rev(char *s)

{

	int i;



	while (s[i] != '\0')

	{

		i++;

	}



	i--;



	while (s[i] != '\0')

	{

	_putchar(s[i--]);

	}

	_putchar('\n');

}

Footer

© 2022 GitHub, Inc.

Footer navigation

Terms

Privacy

Security
