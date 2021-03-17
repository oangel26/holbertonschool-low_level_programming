#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: arguments count
 * @argv: pointer to array of string
 * Return: Always 0 if succefull
 */

int main(int argc, char *argv[])
{
	int result;
	int i;

	result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		result = result * atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
