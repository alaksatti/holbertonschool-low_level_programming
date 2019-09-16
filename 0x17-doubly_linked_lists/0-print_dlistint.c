#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint list
 * @h: head of linked list.
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
