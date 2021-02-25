#include "holberton.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: stirng to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
