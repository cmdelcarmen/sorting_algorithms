#include "sort.h"

/**
 * check_if_sorted - function checks if array is sorted
 * @array: array in need to be sorted
 * @size: size of array
 * Return: 1 if array is sorted, 0 if array not sorted
 */
int check_if_sorted(int *array, size_t size)
{
	unsigned int element, stop = 0;

	for (element = 0; element < size; element++)
	{
		if ((element + 1) < size)
		{
			if (array[element] > array[element + 1])
				return (stop);
		}
	}
	stop = 1;
	return (stop);
}

void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}



void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
