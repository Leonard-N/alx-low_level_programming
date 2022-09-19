#include <stdio.h>
#include "main.h"

/**
* print_number - function that print all numbers from 0 to 9
* Description: function name is print_numbers
*
* Return: returns nothing
*/

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + "0");
	}
	_putchar ("\n");
}
