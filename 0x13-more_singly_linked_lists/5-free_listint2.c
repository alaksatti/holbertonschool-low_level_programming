#include "lists.h"



/**
 * free_listint2 - frees a linked list using a double pointer to beginning.
 * @head: double pointer to beginning of head.
 * Return: Nothing.
 */


void free_listint2(listint_t **head)
{
	listint_t *thisnode = *head;

	while (*head)
	{
		thisnode = *head;
		*head = (*head)->next;
		free(thisnode);

	}

	*head = NULL;




}
