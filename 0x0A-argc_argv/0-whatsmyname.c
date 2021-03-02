#include "holberton.h"

/**
 * main - program that prints its name, followed by a new line.
 * @argc: arguments count
 * @argv: pointer to array of string
 * Return: Always 0 if succefull
 */

int main(int argc, char* argv[])
{
	int i;
	int j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		_putchar(argv[i][j]);
		}
	}

	_putchar('\n');

	return (0);
}
