#include "holberton.h"


/**
* swap_int - swaps the values of two integers
* @a: pointer type interger
* @b: pointer type interger
* Description:swaps the values of two integers
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
