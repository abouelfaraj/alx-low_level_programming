#ifndef __HASH__
#define __HASH__

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* 0-hash_table_create.c */
hash_table_t *hash_table_create(unsigned long int size);


#endif
