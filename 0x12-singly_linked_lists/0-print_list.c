#include "lists.h"



/**
 * print_list - prints all elements of linked list of type list_t.
 * @h: linked list of type list_t.
 * Return: number of notes in size_t.
 */

size_t print_list(const list_t *h)
{

	size_t num = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		num++;

	}


	return (num);

}
