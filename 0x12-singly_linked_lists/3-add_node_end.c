#include "lists.h"

/**
 * add_node_end - adds a new node at the end of linked list.
 * @head: pointer to list.
 * @str: string.
 * Return: Address to new node at beginning of list.
 */


list_t *add_node_end(list_t **head, const char *str)
{

	list_t  *node, *end;

	node = malloc(sizeof(list_t));


	if (node)

	{
		node->len = 0;
		end = *head;

		if (str)
		{
			node->str = strdup(str);
			if (!node->str)
			{
				free(node);
				return (NULL);
			}
			while (node->str[node->len])
				node->len++;
		}

		else
			node->str = NULL;
	}

	if (*head)
	{
		while (end->next)
			end = end ->next;
		end->next = node;
	}
	else

		*head = node;

	return (node);

}
