#include "lists.h"


/**
 * free_listint_safe - frees a linked list.
 * @h: pointer to beginning of list.
 * Return: size of free'd list.
 */


size_t free_listint_safe(listint_t **h)
{
	ptrlink *list;
	listint_t *nodescanner;
	int checked;
	size_t numfree = 0;

	while (*h && h)
	{
		checked = (repeat_check(list, *h));


		if (checked)
			break;

		create_node(&list, *h);

		nodescanner = *h;

		*h = (*h)->next;

		free(nodescanner);

		numfree++;
	}

	*h = NULL;
	free_ptrlink(list);
	return (numfree);
}
