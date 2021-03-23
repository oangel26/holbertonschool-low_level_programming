#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: pointer to head of list
 * Return: interger sum
 */

int sum_listint(listint_t *head)
{
	int num = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		num = num + head->n;
		head = head->next;
	}
	return (num);
}
