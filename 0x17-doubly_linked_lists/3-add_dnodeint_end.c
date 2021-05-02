#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer to pointer to a node data structure
 * @n: constant interger
 * Return: new node data structure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/*guard conditions if head is NULL*/
	if (head == NULL)
	{
		return (NULL);
	}
	new = *head;
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = malloc(sizeof(dlistint_t));
	/*guard condition if no memory for node*/
	if (new->next == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}
	new->next->n = n;
	new->next->next = NULL;
	if (*head != NULL)
	{
		new->prev = *head;
	}
	(*head)->next = new;
	return (*head);
}
