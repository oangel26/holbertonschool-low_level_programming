#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		printf("head is Null\n");
		return;
	}
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		temp->str = NULL;
		temp->len = 0;
		free(temp);
	}
}
