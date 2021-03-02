#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: arguments count
 * @argv: pointer to array of string
 * Return: Always 0 if succefull
 */

int main (int argc, char* argv[])
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		argc = i;
	}

	printf("%d\n", argc);

	return (0);
}
