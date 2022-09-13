#include <stdio.h>

/**
 * main- int main(void)
 * Description: Print numbers from 0 to 9 separated by comma and space
 *
 * Return: 0
 */

int main(void)

{

	int n;

	for (n = 0; n < 10; n++)

	{

	putchar(n);

	if (n < 9)

	{
		putchar(',');
																putchar(' ');
																}
	}

	putchar('\n');

	return (0);

}
