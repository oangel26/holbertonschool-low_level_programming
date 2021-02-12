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
			putchar(x + '0');
		}
		for (y = 0; y <= 4; y++)
		{
			putchar('1');
			putchar(y + '0');
		}
                putchar('\n');
	}
}
