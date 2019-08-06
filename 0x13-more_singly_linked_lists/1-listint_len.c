#include "lists.h"


/**
 * listint_len - returns number of elements in a linked list.
 * @h: pointer to beginning of list.
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t nelem = 0;

	while (h)
	{

		nelem++;
		h = h->next;


	}

	return (nelem);



}
