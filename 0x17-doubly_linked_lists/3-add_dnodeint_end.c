#include "lists.h"


/**
 * add_dnodeint_end - add node to end of doubly linked list.
 * @head: pointer beginning of linked list.
 * @n: value associated with node.
 * Return: address of new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *newnode, *nodescanner = *head;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode)
	{
		newnode->n = n;
		newnode->next = NULL;

		if (!*head)
		{
			*head = newnode;
			newnode->prev = NULL;
			return (newnode);
		}

		while (nodescanner && nodescanner->next)
		{
			nodescanner = nodescanner->next;
		}

		newnode->prev = nodescanner;
		nodescanner->next = newnode;


	}

	return (newnode);
}
