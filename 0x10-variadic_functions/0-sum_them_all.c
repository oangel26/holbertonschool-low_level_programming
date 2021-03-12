#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: constant paramater argument number of arguments
 * Return: sum of the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap; /* varialbe list called arg. param*/

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(ap, n); /*variable start (arg. pam, # of arguments)*/
		for (i = 0; i < n; i++)/*loop that sums each arg. param. */
		{
			sum = sum + va_arg(ap, int);
		}
		va_end(ap); /*variable end (arg. par)*/
		return (sum);
	}
}
