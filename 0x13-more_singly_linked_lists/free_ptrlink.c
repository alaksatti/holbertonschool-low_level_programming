#include "lists.h"


/**
 * free_ptrlink - frees linked list of pointers.
 * @list: linked list to be freed.
 * Return: Nothing.
 */



void free_ptrlink(ptrlink *list)
{
	ptrlink *node;


	while (list)
	{
		node = list;
		list = list->next;
		free(node);
	}
}
