#include "lists.h"


/**
 * add_nodeint - adds a node to the beginning of a linked list.
 * @head: pointer to a pointer thhat points to the beginning of list.
 * @n: value for node.
 * Return: pointer to new node.
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;


	newnode = malloc(sizeof(listint_t));




	if (newnode)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
