#include "lists.h"

/**
 * free_dlistint - function that frees a node data structure list
 * @head: pointer to node
 * Return: VOID
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	/*guard condition for NULL pointer*/
	if (head == NULL)
	{
		return;
	}
	else
	{
		while (head != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
