#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a node at a given position.
 * @h: beginning of doubly linked list.
 * @idx: index of list where new node should be added.
 * @n: value associated with node.
 * Return: NULL if unable to add node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *nodescanner = *h;

	if (!h)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;

	if (!idx)
	{
		newnode->prev = NULL;
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}

	while (nodescanner && idx > 1 && nodescanner->next)
	{
		idx--;
		nodescanner = nodescanner->next;
	}

	if (!nodescanner || idx > 1)
	{
		return (NULL);
		free(newnode);
	}

	newnode->next = nodescanner->next;
	newnode->prev = nodescanner;

	if (nodescanner->next)
		nodescanner->next->prev = newnode;

	nodescanner->next = newnode;

	return (newnode);
}
