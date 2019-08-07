#include "lists.h"

/**
 * reverse_listint - reverses linked list.
 * @head: pointer to begining of linked list.
 * Return: pointer to first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prevnode = NULL;



	while (*head)
	{


		next = (*head)->next;

		(*head)->next = prevnode;

		prevnode = *head;

		*head = next;

	}

	*head = prevnode;

	return (*head);





}
