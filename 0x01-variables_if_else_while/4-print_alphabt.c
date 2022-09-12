#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and a new line.
 *
 * Description: Print all the letters except q and e. 
 *
 * Return: 0
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return(0);
}
