#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list.
 * @index: index of node.
 * @head: beginning of linked list.
 * Return: nothing.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	while (head && index)
	{
		head = head->next;
		index--;

	}


	if (head && !index)
		return (head);
	else
		return (NULL);


}
