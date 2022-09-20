#include "main.h"

/**
* swap_int - swaps the values of two integers.
* 
* @a: arg x
* @a: arg y
* Return: void
*/

void swap_int(int *x, int *y)
{
int z;

z = *x;
*x = *y;
*y = z;
}
