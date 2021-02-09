#include "holberton.h"

/**
 * print_alphabet_x10 -  entry point
 * Description: program prints alphabetx10
 * Return: Always return void
 */

void print_alphabet_x10(void)
{
	char x;
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
