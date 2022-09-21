#include "main.h"

/**
* print_array - prints arrays
* @a: arg a
* @n: num
*
* Return: string to stdout
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			_putchar("%d, ", a[i]);
		else
			_putchar("%d", a[i]);
	}
	_putchar('\n');
}
