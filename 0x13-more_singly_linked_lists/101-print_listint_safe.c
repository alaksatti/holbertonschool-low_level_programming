#include "lists.h"


/**
 * print_listint_safe - prints a linked list.
 * @head: pointer to beginning of list.
 * Return: Number of nodes.
 */


size_t print_listint_safe(const listint_t *head)
{
	ptrlink *list, *newnode;
	size_t numnodes = 0;
	int search;


	while (head)
	{

		search = repeat_check(list, head);
		if (search)
		{
			printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}

		printf("[%p] %i\n", (void *)head, head->n);

		newnode = create_node(&list, head);
		if (!newnode)
		{
			free_ptrlink(list);
			exit(98);
		}

		numnodes++;
		head = head->next;
	}

	free_ptrlink(list);
	return (numnodes);
}

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
		if (list->ptr == (size_t)ptr_element)
			return (1);

		list = list->next;
	}

	return (0);

}

/**
 * create_node - Adds a node to a linked list/
 * @list: double pointer to linked list.
 * @ptr_element: ptr element to be added.
 * Return: pointer to new node.
 */

ptrlink *create_node(ptrlink **list, const listint_t *ptr_element)
{
	ptrlink *newnode;

	newnode = malloc(sizeof(ptrlink));

	if (newnode)
	{

		newnode->ptr = (size_t)ptr_element;

		newnode->next = *list;

		*list = newnode;
	}

	return (newnode);

}
/**
 * free_ptrlink - frees linked list of pointers.
 * @list: linked list to be freed.
 * Return: Nothing.
 */



void free_ptrlink(ptrlink *list)
{
	ptrlink *node;

	while (list)
	{

		node = list;
		list = list->next;
		free(node);
	}
}
