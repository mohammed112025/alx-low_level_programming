#include "hash_tables.h"

int updated(hash_node_t *, const char *, const char *);

/**
 * hash_table_set - add an element to the hash table
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: key of the new element
 * @value: value of the new element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *new_elem;
	unsigned long int index;

	if (!ht || !(ht->size) || !(ht->array) || !key || *key == '\0')
		return (0);

	/* location of the element in the given hash table */
	index = hash_djb2((unsigned const char *) key) % ht->size;
	temp = ht->array[index];

	/* update the value of a key if the key exists in the hash table */
	if (updated(temp, key, value))
		return (1);

	/* create a new element and assign its key/value */
	new_elem = malloc(sizeof(hash_node_t));
	new_elem->key = malloc(sizeof(char) * (strlen(key) + 1));
	strcpy(new_elem->key, key);
	if (value)
	{
		new_elem->value = malloc(sizeof(char) * (strlen(value) + 1));
		strcpy(new_elem->value, value);
	}
	new_elem->next = NULL;

	/* add an element and handle the collision */
	if (!temp)
		ht->array[index] = new_elem;
	else
	{
		temp = ht->array[index];
		ht->array[index] = new_elem;
		new_elem->next = temp;
	}

	return (1);
}



/**
 * updated - update value of a key if it exist
 *
 * @head: head of the given list
 * @key: key of the element
 * @new_value: the updated or the new value
 *
 * Return: 1 if the key was found and updated, 0 otherwise
 */
int updated(hash_node_t *head, const char *key, const char *new_value)
{
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = malloc(sizeof(char) * (strlen(new_value) + 1));
			strcpy(head->value, new_value);
			return (1);
		}
		head = head->next;
	}
	return (0);
}
