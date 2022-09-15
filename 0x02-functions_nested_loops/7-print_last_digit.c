#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int nld)
{
	int y;

	y = (n % 10);

	if (y < 0)
	{
		y = (-1 * y);
	}

	_putchar (y + '0');
	return (y);
}
