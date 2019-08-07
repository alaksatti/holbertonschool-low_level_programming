#include "lists.h"


/**
 * free_listint - frees a linked list.
 * @head: pointer to beginning of linked list.
 * Return: nothing.
 */



void free_listint(listint_t *head)
{
	listint_t *thisnode = head, *nextnode;

	while (thisnode)
	{
		nextnode = thisnode->next;

		free(thisnode);

		thisnode = nextnode;
	}


}
