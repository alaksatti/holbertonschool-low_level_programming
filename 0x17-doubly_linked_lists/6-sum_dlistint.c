#include "lists.h"

/**
 * sum_dlistint - returns the sume of all the data of a linked list.
 * @head: pointer to beginning of list.
 * Return: sum of data  0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
