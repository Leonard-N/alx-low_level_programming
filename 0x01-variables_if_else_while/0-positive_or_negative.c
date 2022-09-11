#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This program will assign a random number to the variable n.
 *
 * whether the nmuber is positive, negative or zero.
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0 )
	{
		printf('is positive %i\n', n);
	}
	else if (n ==0 )
	{
		printf('is zero %i\n', n);
	}
	else (n < 0 )
	{
		printf('is negative %i\n', n);
	}

	return (0);

}
