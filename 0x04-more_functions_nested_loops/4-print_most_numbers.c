#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - prints numbers excpt 2 and 4
*
*Return: returns nothing
*/

void print_most_nmbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			contnue;
		}
		putchar(n);

	}
	putchar(10);
}
