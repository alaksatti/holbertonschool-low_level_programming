#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list.
 * @n: value for new node/
 * @head: pointer to pointer.
 * Return: address of new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *prevnode, *endnode, *finder = *head;


	endnode = malloc(sizeof(listint_t));

	if (endnode)
	{
		endnode->n = n;
		endnode->next = NULL;
	}

	if (!*head)
	{
		*head = endnode;
		return (*head);
	}

	while (finder)
	{
		prevnode = finder;
		finder = finder->next;
	}

	prevnode->next = endnode;
	return (endnode);
}
