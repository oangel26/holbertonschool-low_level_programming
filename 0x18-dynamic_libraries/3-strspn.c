#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string s
 * @accept: substring accept
 * Return: Returns length of the initial segment of s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int cont;

	cont = 0;

	for (i = 0; s[i] != ' ' ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cont++;
			}
		}
	}
	return (cont);
}
