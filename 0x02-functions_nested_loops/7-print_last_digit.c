#include "holberton.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @x: entry number
 * Return: return last digit
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
		_putchar(((x * -1) % 10) + '0');
		return ((x * -1) % 10);
	}
	else if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar((x % 10) + '0');
		return (x % 10);
	}
}
