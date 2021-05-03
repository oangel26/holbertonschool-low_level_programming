#include "lists.h"

/**
 * get_dnodeint_at_index - function that return the nth of a node in list
 * @head: pointer to node data structre
 * @index: unsigned int containing index of node to return
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	/*guard condition to NULL pointer*/
	if (head == NULL)
	{
		return (NULL);
	}
	while (i != index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
