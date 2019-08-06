#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: double pointer to head of list.
 * Return: the head node's data.
 */
int pop_listint(listint_t **head)
{

	listint_t *headnode = *head, *newhead;
	int value;



	if (!*head)
		return (0);


	value = headnode->n;
	newhead = headnode->next;
	*head = newhead;
	free(headnode);

	return (value);







}
