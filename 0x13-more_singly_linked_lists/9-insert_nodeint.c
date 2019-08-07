#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a specific position.
 * @head: pointer to beginning of list.
 * @idx: index.
 * @n: value.
 * Return: pointer to new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodescanner = *head, *prevnode = *head, *newnode;
	unsigned int index = 0;


	if (!head)
		return (NULL);



	newnode = malloc(sizeof(listint_t));

	if (newnode)
	{

		newnode->n = n;

		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}

		while (nodescanner && index != idx)
		{

			index++;
			prevnode = nodescanner;
			nodescanner = nodescanner->next;
		}


		if (index == idx)
		{
			newnode->next = prevnode->next;

			prevnode->next = newnode;
		}

		else
			return (NULL);
	}

	return (newnode);



}
