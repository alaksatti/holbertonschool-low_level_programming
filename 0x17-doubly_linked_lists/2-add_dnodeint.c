#include "lists.h"

/**
 * dlistint_t *add_dnodeint -  adds a new node at the beginning of a linkedlist
 * head: beginning of list.
 * n:number associated with node.
 * Return: address of new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));


	if (newnode)
	{

		newnode->n = n;
		newnode->next = *head;
		newnode->prev = NULL;

		if (*head)
			(*head)->prev = newnode;


		(*head) = newnode;

	}

	return (newnode);

}
