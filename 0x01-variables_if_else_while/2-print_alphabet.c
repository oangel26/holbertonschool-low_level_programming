#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description:  prints the alphabet in lowercase with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
/* your code goes there */

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
