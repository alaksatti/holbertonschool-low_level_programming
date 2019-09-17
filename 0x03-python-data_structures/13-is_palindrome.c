#include "lists.h"

/**
 * is_palindrome checks if a singly linked list is a palindrome or not.
 * @head: pointer to beginning of linked lists.
 * Returns: 0 if not, 1 if is a palindrome.
 */

int is_palindrome(listint_t **head)
{
	unsigned int reverse = 0, remainder, actualnum = 0, num;

	while (!*head)
	{
		remainder = (*head)->n;
		actualnum *= 10 + remainder;
		*head = (*head)->next;

	}

	num = actualnum;

	while (num)
	{

		remainder = num % 10;
                reverse *= 10 + remainder;
		num /= 10;

	}

	if (actualnum == reverse || !*head)
		return (1);

	return (0);

}
