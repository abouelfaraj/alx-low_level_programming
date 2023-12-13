#ifndef _SORTING_H
#define _SORTING_H

#include <stdlib.h>
#include <stdio.h>

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);


#endif
