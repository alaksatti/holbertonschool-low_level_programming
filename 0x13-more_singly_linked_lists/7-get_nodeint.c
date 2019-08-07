#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to beginning of linked list.
 * @index: index of the node.
 * Returns: pointer to nth node.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodefinder = head;
	unsigned int indexfinder = 0;



	if (!head)
		return (NULL);

	while (nodefinder && indexfinder != index)
	{
		indexfinder++;
		nodefinder = nodefinder->next;

	}


	if (indexfinder == index)
		return (nodefinder);

	else
		return (NULL);

}
