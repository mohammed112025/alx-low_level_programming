#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table contains the existed keys
 * @key: the key you are looking for
 *
 * Return:
 *	- the value associated with the element
 *	- Null if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (!ht || !(ht->array) || !(ht->size) || !key)
		return (NULL);

	index = hash_djb2((const unsigned char *) key) % ht->size;
	head = ht->array[index];

	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
