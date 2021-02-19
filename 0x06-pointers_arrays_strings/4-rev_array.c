#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @*a: pointer type interger
 * @n: interger
 * Description: function that reverses the content of an array of integers.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;
	int x = 0;

	for (i = 0; i < n; i++)
	{

	}
	x = i--;
	for (j = 0; j < x/2; j++, i--)
	{
		temp = a[j];
		a[j] = a[i];

		a[i] = temp;
	}
}
