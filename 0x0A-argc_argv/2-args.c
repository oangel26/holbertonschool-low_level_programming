#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: arguments count
 * @argv: pointer to array of string
 * Return: Always 0 if succefull
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
