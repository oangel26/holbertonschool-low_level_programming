#include "holberton.h"


/**
* reset_to_98 - pointer pdates value it points to 98
* @*n: pointer type interger
* Description: updates value it points to 98
* Return: void
*/

void reset_to_98(int *n)
{
	int *p;

	p = n;

	*p = 98;
}
