#include "holberton.h"


/**
* print_rev - function that prints a string, in reverse
* @s: pointer type char
* Description: function that prints a string, in reverse
* Return: void
*/

void print_rev(char *s)
{
	int i = 0;
	int j = 0;
	int x = 0;


	for (; s[i]; i++)
	{
		x++;
	}
	for (j = x - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
