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
	int jump = sqrt((int)size);
	listint_t *f = list, *pos = list;

	if (!list)
		return (NULL);


	while (pos->next && pos->index < jump)
		pos = pos->next;

	printf("Value checked at index [%lu] = [%d]\n", pos->index, pos->n);

	if (pos->index == size - 1 || pos->n >= value)
		printf("Value found between indexes [%lu] and [%lu]\n",
		       f->index, pos->index);


}

/**
 * jump_loop - loops through linked list
 * @list: linked list
 * @size: size of linked list
 * 
 */
listint_t *jump_loop(listint_t *list, size_t size, int value, int check)
{
	i






}
