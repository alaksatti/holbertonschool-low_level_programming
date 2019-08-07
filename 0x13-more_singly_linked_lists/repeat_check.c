#include "lists.h"


/**
 * repeat_check - checks if an element in a list exists within another list.
 * @list: pointer to beginning of list to be checked.
 * @ptr_element: element to be checked.
 * Return: 1 if exists, 0 if not.
 */


int repeat_check(ptrlink *list, const listint_t *ptr_element)
{

	while (list)
	{
		if (list->ptr == ptr_element)
			return (1);

		list = list->next;
	}

	return (0);

}
