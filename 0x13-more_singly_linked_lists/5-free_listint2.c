#include "lists.h"



/**
 * free_listint2 - frees a linked list using a double pointer to beginning.
 * @head: double pointer to beginning of head.
 * Return: Nothing.
 */


void free_listint2(listint_t **head)
{
	listint_t *thisnode = *head, *nextnode;

	while (thisnode)
	{
		nextnode = thisnode->next;
		free(thisnode);
		thisnode = nextnode;

	}

	*head = NULL;




}
