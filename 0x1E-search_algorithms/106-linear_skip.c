#include "search_algos.h"

/**
 * linear_skip - find a value in skip list
 * @list: pointer to skip list
 * @value: value to be found
 * Return: index or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *scan = list, *last = list;

	if (!list)
		return (NULL);
	while (last->next && last->next->next)
		last = last->next;

	while (scan->express && scan->express->n < value)
	{
		printf("Value checked at index [%i] = [%i]\n",
				(int)scan->express->index, scan->express->n);
		scan = scan->express;
	}

	if (scan->express && scan->n <= value)
		printf("Value checked at index [%i] = [%i]\n",
				(int)scan->express->index, scan->express->n);

	if (scan->express)
		printf("Value found between indexes [%i] and [%i]\n",
				(int)scan->index, (int)scan->express->index);
	else
		printf("Value found between indexes [%i] and [%i]\n",
				(int)scan->index, (int)last->index + 1);

	while (scan->next && scan->n < value)
	{
		printf("Value checked at index [%i] = [%i]\n",
				(int)scan->index, scan->n);
		scan = scan->next;
	}

	printf("Value checked at index [%i] = [%i]\n",
			(int)scan->index, scan->n);

	if (scan->n == value)
		return (scan);

	return (NULL);
}
