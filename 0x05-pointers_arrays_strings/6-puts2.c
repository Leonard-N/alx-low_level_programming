#include "main.h"

/**
* * puts2 -  prints a s* @str: the output will ba a sting
* Return: string to stdout

void puts2(char *str)

{

	int i;



	while (str[i] != '\0')

	{

		if (i % 2 == 0)

			_putchar(str[i]);

		i++;

	}

	_putchar('\n');

