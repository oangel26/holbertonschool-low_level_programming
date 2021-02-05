#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse, with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

/* your code goes there */

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
