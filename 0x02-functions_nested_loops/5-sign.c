#include "holberton.h"

/**
 * print_sign -  entry point
 * @n: parameter of entry
 * Description: function that prints the sign of a number
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

	_putchar('0');

	return (0);

}
