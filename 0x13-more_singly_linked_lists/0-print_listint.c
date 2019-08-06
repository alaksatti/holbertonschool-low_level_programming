#include "lists.h"

/**
 * print_listint - prints the elements in a linked list.
 * @h: pointer to beginning of list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{

	size_t numnode = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		numnode++;
	}

	return (numnode);


}
