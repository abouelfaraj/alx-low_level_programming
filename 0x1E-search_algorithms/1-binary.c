#include "search_algos.h"

/**
 * search_recursing - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int search_recursing(int *array, size_t size, int value)
{
	size_t average = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (average && size % 2 == 0)
		average--;

	if (value == array[average])
		return ((int)average);

	if (value < array[average])
		return (search_recursing(array, average, value));

	average++;

	return (search_recursing(array + average, size - average, value) + average);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = search_recursing(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
