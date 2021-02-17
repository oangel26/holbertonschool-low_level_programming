#include "holberton.h"


/**
* puts_half - prints upper half of a string
* @str: pointer type char
* Description: prints upper half of a string
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int x;

	x = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		x++;
	}

	if (x % 2 == 0)
	{
		for (i = x / 2; i <= x; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (x % 2 == 1)
	{
		for (i = (x - 1) / 2; i <= x; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
