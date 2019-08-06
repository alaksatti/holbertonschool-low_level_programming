#include "lists.h"


/**
 * free_listint - frees a linked list.
 * @head: pointer to beginning of linked list.
 * Return: nothing.
 */



void free_listint(listint_t *head)
{
	listint_t *ptr = head, *ptr2;

	while (ptr)
	{
		ptr2 = ptr->next;

		free(ptr);

		ptr = ptr2;
	}

}
