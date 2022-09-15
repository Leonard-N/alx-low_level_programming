#include "main.h"
#include <string.h>

/**
 * main - int main(void)
 *
 * Description: prints _putchar using putchar prototype
 * Return: 0
 */

int main(void)
{
	char *sh = "Holberton";

	while (*sh)
{
	_putchar(*sh);
									sh++;
								}
	_putchar('\n');

	return 0;
	
}
