#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description:  Write a program that prints the numbers from 00 to 99
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

/* your code goes there */

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			putchar(x + '0');

			putchar(y + '0');

			if (y <= 9)
			{
				putchar(',');

				putchar(' ');
			}

		}

	}
	putchar('\n');

	return (0);
}
