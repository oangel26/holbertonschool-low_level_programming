#include <stdio.h>


/**
* main - prints the numbers from 1 to 100, Fizz and Buzz in 3 and 5
* Description: rints the numbers from 1 to 100, Fizz and Buzz in 3 and 5 mod
* Return: void
*/

void prints_fizz_buzz(void);

int main(void)
{
	int i;
	int a;
	int b;

	for (i = 1; i <= 100; i++)
	{
		a = i % 3;
		b = i % 5;
		if ((a != 0 || b != 0) && a != 0 && b != 0) 
		{
			printf("%d", i);
			printf(" ");
		}
		else if (a == 0 && b != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (b == 0 && a != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (a == 0 && b == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
