#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list.
 * @head: pointer to beginning of list.
 * Return: sum of data.
 */
int sum_listint(listint_t *head)
{
	listint_t *nodescanner = head;
	int value = 0;

	if (!head)
		return (0);

	while (nodescanner)
	{
		value += nodescanner->n;
		nodescanner = nodescanner->next;

	}



	return (value);
}
