#ifndef DOUBLY_LLIST
#define DOUBLY_LLIST

#include <stddef.h>
#include <stdlib.h>

/**
 * Description: dlistint_t - node of a doubly linked list
 * @data: node data
 * @next: pointer points to the next node
 * @prev: pointer points to the previoud node
 */
typedef struct dlistint_t
{
	int n;
	struct dlistint_t *next;
	struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
void free_dlistint(dlistint_t *head);

#endif
