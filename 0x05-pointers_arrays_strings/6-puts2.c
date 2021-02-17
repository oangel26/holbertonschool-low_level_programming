#include "holberton.h"


/**
* puts2 -  prints every two character of a string
* @str: pointer type char
* Description: prints every two character of a string
* Return: void
*/

void puts2(char *str)
{
	int i;
	int x;

	x = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		x++;
	}
	for (i = 0; i < (x / 2); i++)
	{
		_putchar(str[2 * i]);
	}
	_putchar('\n');
}
