#include "holberton.h"

/**
 * jack_bauer -  entry point
 * Description: function that prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	char x;
	char y;
	char z;
	char w;

	for (x = '0'; x <= '2'; x++)
	{
		for (y = '0'; y <= '3'; y++)
			{
				for (z = '0'; z <= '5'; z++)
				{
					for (w = '0'; w <= '9'; w++)
					{
						_putchar(x);
						_putchar(y);
						_putchar(':');
						_putchar(z);
						_putchar(w);
						_putchar('\n');
					}
				}
			}
	}
}
