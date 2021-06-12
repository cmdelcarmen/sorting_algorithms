#include "sort.h"

/**
 * selection_sort - function uses selection sort to sort array
 * @array: array that needs to be sorted
 * @size: size of array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	int stop = 0;

	while (stop == 0)
	{
		stop = check_if_sorted(array, size);
		if (stop == 0)
			selection_sort_array(array, size);
	}
}

/**
 * selection_sort_array - function sorts array using selection sort
 * @array: size of array
 * @size: size of array
 */
void selection_sort_array(int *array, size_t size)
{
	int idx, idx2, min_num, number_holder, swap_idx, swap = 0;

	for (idx = 0; idx < size; idx++)
	{
		min_num = array[idx];

		for (idx2 = (idx + 1); idx2 < size; idx2++)
		{
			if (min_num > array[idx2])
			{
				min_num = array[idx2];
				swap_idx = idx2;
				swap = 1;
			}
		}
		if (swap == 1)
		{
			number_holder = array[idx];
			array[idx] = array[swap_idx];
			array[swap_idx] = number_holder;
			print_array(array, size);
			swap = 0;
		}
	}
}
