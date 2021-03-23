#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to data structur (list)
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		temp->n = '\0';
		free(temp);
	}
	free(head);
}
