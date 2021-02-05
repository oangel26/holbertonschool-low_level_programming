#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description:  prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* your code goes there */

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");

	return (0);
}
