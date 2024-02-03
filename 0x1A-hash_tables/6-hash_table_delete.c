#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to have memory freed
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int indx, w;
	hash_node_t *head = NULL, *temp = NULL;

	if (ht && ht->array)
	{
		for (indx = 0; indx < ht->size; indx++)
		{
			if (ht->array[indx])
			{
				head = ht->array[indx];
				temp = head;
			}
			for (w = 0; head; w++)
			{
				temp = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = temp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
