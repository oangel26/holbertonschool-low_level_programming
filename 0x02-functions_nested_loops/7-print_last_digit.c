#include "holberton.h"

/**
 * int print_last_digit -  entry point
 * @c: entry number
 * Description: function that prints the last digit of a number
 * Return: return last digit
 */

int print_last_digit(int x)
{
	int lastDigit;
	lastDigit = x % 10;
	return (lastDigit);
}
