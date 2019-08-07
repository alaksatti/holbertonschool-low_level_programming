#include "lists.h"



/**
 * delete_nodeint_at_index - deletes a node at a specific index.
 * @head: pointer to beginning of linked list.
 * @index: index of node to be deleted.
 * Return: 1 if successfull or -1 if not.
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *nodescanner = *head, *prevnode = *head, *targetnode;
	unsigned int idx = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{

		*head = nodescanner->next;
		free(nodescanner);
		return (1);
	}
	while (nodescanner && idx != index)
	{
		idx++;
		prevnode = nodescanner;
		nodescanner = nodescanner->next;


	}
	if (idx == index)
	{

		targetnode = nodescanner;

		prevnode->next = targetnode->next;

		free(targetnode);

		return (1);
	}

	return (-1);
}
