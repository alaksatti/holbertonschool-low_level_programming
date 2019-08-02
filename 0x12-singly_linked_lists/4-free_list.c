#include "lists.h"



/**
 * frr_list - frees the linked list head.
 * @head: linked list to be freed.
 * Return: nothing.
 *
 */


void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}


}
