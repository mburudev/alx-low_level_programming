#include "hash_tables.h"

void hash_table_print(const hash_table_t* ht) {
    if (ht == NULL)
        return;

    for (unsigned int i = 0; i < HASH_TABLE_SIZE; i++) {
        hash_table_node_t* current = ht->buckets[i];

        while (current != NULL) {
            printf("Key: %s, Value: %s\n", current->key, current->value);
            current = current->next;
        }
    }
}
