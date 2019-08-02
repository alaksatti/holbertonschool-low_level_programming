#include "lists.h"

/**
 * add_node - adds a new node at the beginning of linked list.
 * @head: pointer to list.
 * @str: string.
 * Return: Address to new node at beginning of list.
 */


list_t *add_node(list_t **head, const char *str)
{

	list_t  *node;

	node = malloc(sizeof(list_t));


	if (node)

	{
		node->len = 0;
		node->next = *head;

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

		*head = node;
	}
	return (node);

}
