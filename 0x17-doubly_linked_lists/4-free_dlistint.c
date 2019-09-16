#include "lists.h"

/**
 * free_dlistint - frees doubly linked list.
 * @head: beginnig of linked list.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodescanner = head;

	while (nodescanner)
	{
		free(nodescanner);
		head = head->next;
		nodescanner = head;
	}


}
