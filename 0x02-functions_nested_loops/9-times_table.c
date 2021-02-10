#include "holberton.h"

/**
 * times_table -  entry point
 * @x: interger
 * @y: character
 * Description: function that prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	char x;
	char y;
        char z;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			z = x * y;
			_putchar(z);
			_putchar(',');
		}
		_putchar('\n');
	}
}
