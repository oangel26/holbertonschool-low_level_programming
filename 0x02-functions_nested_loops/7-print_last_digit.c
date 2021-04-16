#include "holberton.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @x: int entry number
 * Return: return last digit
 */

int print_last_digit(int x)
{
	long int number = x;

	if (number < 0)
	{
		_putchar(((number * -1) % 10) + '0');
		return ((number * -1) % 10);
	}
	else if (number == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar((number % 10) + '0');
		return (number % 10);
	}
}
