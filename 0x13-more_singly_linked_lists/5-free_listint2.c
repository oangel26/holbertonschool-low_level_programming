#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer to data structure list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (*head == NULL)
	{
		return;
	}
	else
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
}
