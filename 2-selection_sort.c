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


/**
 * selection_sort_array - function sorts array using selection sort
 * @array: size of array
 * @size: size of array
 */
void selection_sort_array(int *array, size_t size)
{
	unsigned int idx, idx2, number_holder, swap_idx, swap = 0;
	int min_num;

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
