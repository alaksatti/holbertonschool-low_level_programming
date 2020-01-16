#include "search_algos.h"
#include <math.h>

/**
 * jump_list - finds a value using jump list algo
 * @list: linked list
 * @size: size of list
 * @value: valued to be searched
 * Return: index of value or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump = sqrt((int)size), jumper = jump;
	listint_t *f = list, *pos = list;

	if (!list)
		return (NULL);

	while (1)
	{
		f = pos;
		pos = looper(pos, jumper);
		printf("Value checked at index [%i] = [%i]\n",
				(int)pos->index, pos->n);

		if (pos->index == size - 1 || pos->n >= value)
		{
			printf("Value found between indexes [%i] and [%i]\n",
					(int)f->index, (int)pos->index);
			break;
		}

		f = pos;
		jumper += jump;

	}

	while (f && f->index <= pos->index)
	{

		printf("Value checked at index [%i] = [%i]\n",
				(int)f->index, f->n);


		if (f->n == value)
			return (f);
		f = f->next;
	}

	return (NULL);
}
/**
 *looper - loops through linked list
 * @list: linked list
 * @jump: steps to skip
 * Return: list
 */
listint_t *looper(listint_t *list, int jump)
{
	while (list->next && (int)list->index < jump)
		list = list->next;



	return (list);
}
