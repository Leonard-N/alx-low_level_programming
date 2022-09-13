#include <stdio.h>

/**
 * main - int main(void)
 * Description:nProgramming is like building a multilingual puzzle.
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

	printf('Size of a char: %lu byte(s)\n', (unsigned int)sizeof(x));
	printf('Size of an int: %lu byte(s)\n', (unsigned int)sizeof(z));
	printf('Size of a long int: %lu byte(s)\n', (unsigned int)sizeof(y));
	printf('Size of a long long int: %lu byte(s)\n', (unsigned int)sizeof(w));
	printf('Size of a float: %lu bytes(s)\n', (unsigned int)sizeof(q));
	return (0);

}
