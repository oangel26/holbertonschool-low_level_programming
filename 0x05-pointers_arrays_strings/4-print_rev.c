#include "holberton.h"


/**
* print_rev - function that prints a string, in reverse
* @s: pointer type char
* Description: function that prints a string, in reverse
* Return: void
*/

void print_rev(char *s)
{
	int i;
	int x;
	x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		x++;
	}
	for (i = x; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
