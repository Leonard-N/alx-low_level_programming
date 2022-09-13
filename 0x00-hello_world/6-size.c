#include <stdio.h>

/**
 * main - int main(void)
 *Description: the output should be Programming is like building a multilingual puzzle.

 * Return: 0
 */
int main(void)
{
	char x;
	int z;
	long int y;
	long long int w;
	float q;

	printf('Size of a char: %ld byte(s)\n', sizeof(x));
	printf('Size of an int: %ld byte(s)\n', sizeof(z));
	printf('Size of a long int: %ld byte(s)\n', sizeof(y));
	printf('Size of a long long int: %ld byte(s)\n', sizeof(w));
	printf('Size of a float: %ld bytes(s)\n', sizeof(q));
	return (0);

}
