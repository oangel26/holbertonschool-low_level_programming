#include "holberton.h"

/**
 * _isalpha -  entry point
 * @c: interger of entry
 * Description: program prints Holberton
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
