#include "holberton.h"

/**
 * print_alphabet -  entry point
 * Description: program prints alphabet in lower case
 * Return: void return
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
