#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

int main (int argc, char **argv)
{
	int (*function)(int, int) = get_op_function(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (function == NULL)
	{
		printf("Error\n");
                exit(99);
	}

	int number1 = atoi(argv[1]);
	int number2 = atoy(argv[3]);

	printf("%d\n", function(number1, number2));
	return (0);
}
