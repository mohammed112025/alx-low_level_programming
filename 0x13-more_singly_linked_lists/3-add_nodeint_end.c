#include "lists.h"

/**
 * Description: add_nodeint_end - adds a new node at the end of a linked lists
 * Input:
 *	@head: (pointer to listint_t pointer): points to the head pointer of
 *	a linked lists
 *	@n: (const int): the value of n variable of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;

	}

	temp->next = new;
	return (new);
}
