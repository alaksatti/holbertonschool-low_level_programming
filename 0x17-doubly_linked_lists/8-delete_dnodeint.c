#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index of a doubly linked list.
 * @head: beginning of linked list.
 * @index: index of node to be deleted.
 * Return: 1 if successful, 0 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t  *nodescanner = *head;

	if (*head && head)
	{
		while (index && nodescanner)
		{
			index--;
			nodescanner = nodescanner->next;
		}

		if (!index && nodescanner)
		{

			if (nodescanner->prev)
				nodescanner->prev->next = nodescanner->next;
			else
				*head = nodescanner->next;

			if (nodescanner->next)
				nodescanner->next->prev = nodescanner->prev;

			free(nodescanner);
			return (1);
		}

	}

	return (-1);

}
