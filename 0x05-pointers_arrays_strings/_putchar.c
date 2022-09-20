#include <unistd.h>

/**
 * _putchar: supporting c function to stdout
 * @c: the charcter to print
 *
 * Return: on success 1
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
