#include "holberton.h"


/**
 * *leet - function that encodes a string into 1337
 * @x: pointer type char
 * Description: function that encodes a string into 1337
 * Return: pointer type char
 */

char *leet(char *x)
{
	int j;
	int i;
	char *s;
       	char *p;
	char string[] = "a4A4e3E3o0O0t7T7l1L1";

	p = string;
	s = x;


	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0; p[j] != '\0'; j++)
		{
			if(s[i] == p[j])
			{
				s[i] = p[++j];
				break;
			}
		}
	}
	return (s);
}
