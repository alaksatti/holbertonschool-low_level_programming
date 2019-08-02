#include "lists.h"


/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: linked list of type list_t
 * Return: number or elements in a linked list.
 */



size_t list_len(const list_t *h)
{

	size_t num = 0;


	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);


}
