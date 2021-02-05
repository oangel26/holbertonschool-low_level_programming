#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description:  prints the alphabet from a to Z with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char CH;
/* your code goes there */

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');

	return (0);
}
