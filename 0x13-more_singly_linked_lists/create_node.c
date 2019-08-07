#include "lists.h"


/**
 * create_node - Adds a node to a linked list.
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

		newnode->ptr = ptr_element;
		newnode->next = *list;
		*list = newnode;
	}


	return (newnode);

}
