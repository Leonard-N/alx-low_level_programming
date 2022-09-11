#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Check if a number.
 * @void: Null value
 * Description: positive, negative or zero numbers
 *
 * Return: Zero value
 */

int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
else
{
	printf("%i is zero\n", n);
}
	return (0);
}
