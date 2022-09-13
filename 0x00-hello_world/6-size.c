#include <stdio.h>

/**
 * main - int main(void)
 * Description: the output should be Programming is like building a multilingual puzzle.
 *
 * Return: 0
 */
int main(void)
{
	char x;
	int z;
	long int y;
	long long int w;
	float q;

	printf('Size of a char: %lu byte(s)\n', (unsigned)sizeof(x));
	printf('Size of an int: %lu byte(s)\n', (unsigned)sizeof(z));
	printf('Size of a long int: %lu byte(s)\n', (unsigned)sizeof(y));
	printf('Size of a long long int: %lu byte(s)\n', (unsigned)sizeof(w));
	printf('Size of a float: %lu bytes(s)\n', (unsigned)sizeof(q));
	return (0);

}
