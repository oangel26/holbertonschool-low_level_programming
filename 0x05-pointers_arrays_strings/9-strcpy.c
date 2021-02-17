#include "holberton.h"


/**
* *_strcpy - function that copies the string pointed
* @dest: pointer type char
* @src: pointer type char
* Description: function that copies the string pointed
* Return: pointer type char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= 98; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
