#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description:  prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

/* your code goes there */

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x <= '8')
		{
			putchar(',');

			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
