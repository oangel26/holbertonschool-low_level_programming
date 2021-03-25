#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list (safe ver).
 * @head: pointer to constant data structure
 * Return: number of nodes in loop
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	if (head == NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		exit (98);
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}
	return (n);
}
