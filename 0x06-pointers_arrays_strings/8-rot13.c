#include "holberton.h"


/**
 * *rot13 -  function that encodes a string using rot13
 * @*x: pointer type char
 * Description: function that encodes a string using rot13
 * Return: pointer type char
 */

char *rot13(char *x)
{
	char input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;
	char *in;
	char *o;
	int i = 0;
	int j = 0;

	s = &x;
	in = &input;
	o = &output;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if(s[i] == in[j])
			{
				s[i] = o[j];
				break;
			}
		}
	}
	return (s);
}
