#include "holberton.h"


/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Description: prints 10 times the numbers, from 0 to 14
* Return: void
*/

void more_numbers(void)
{
        int x;
        int y;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0' + x);
	}
	for (y = 0; y <= 4; y++)
	{
		_puthcar('1');
		_putchar('0' + y);
	}
	_putchar('\n');
}
