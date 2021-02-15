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
	int z;

	for (z = 0; z <= 9; z++)
	{
		for (x = 0; x <= 9; x++)
		{
			_putchar('0' + x);
		}
		for (y = 0; y <= 4; y++)
		{
			_putchar('1');
			_putchar('0' + y);
		}
		_putchar('\n');
	}
}
