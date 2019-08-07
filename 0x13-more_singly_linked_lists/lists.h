#ifndef LISTS_H
#define LISTS_H


#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */


typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;



/**
 * struct ptrlink - singly linked list of pointers.
 * @ptr: pointer.
 * @next: points to the next node.
 *
 * Description: singly linked list node structure/
 */


typedef struct ptrlink
{

	size_t ptr;
	struct ptrlink *next;


} ptrlink;




size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);
size_t listint_len(const listint_t *h);
int repeat_check(ptrlink *list, const listint_t *ptr_element);
ptrlink *create_node(ptrlink **list, const listint_t *ptr_element);
void free_ptrlink(ptrlink *list);

#endif
