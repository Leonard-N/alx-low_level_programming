#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: arg a
* @b: arg b
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
