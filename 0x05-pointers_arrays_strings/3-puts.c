#include "holberton.h"


/**
* _puts - function that prints a string,
* @str: pointer type char
* Description: function that prints a string,
* Return: void
*/

void _puts(char *str)
{
	int i;
	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\0');
}
