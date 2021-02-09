#include "holberton.h"

/**
 * main -  entry point
 * Description: program prints Holberton
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
