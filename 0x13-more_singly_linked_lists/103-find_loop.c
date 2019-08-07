#include "lists.h"


/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to linked list
 * Return: address of node where loop starts.
 */


listint_t *find_listint_loop(listint_t *head)
{

	listint_t *stepper = head, *skipper = head;


	while (stepper && skipper && skipper->next)
	{
		stepper = stepper->next;
		skipper = skipper->next->next;

		if (stepper == skipper)
		{
			stepper = head;
			while (stepper != skipper)
			{
				if (stepper == skipper)
					return (stepper);
				stepper = stepper->next;
				skipper = skipper->next;
			}
		}
	}
	return (NULL);
}
