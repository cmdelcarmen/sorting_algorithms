#include "sort.h"

/**
 * bubble_sort - function sorts array using bubble sort
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int stop = 0;

	while (stop == 0)
	{
		stop = check_if_sorted(array, size);
		if (stop == 0)
			bubble_sort_array(array, size);
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
 * bubble_sort_array - function bubble sorts array
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort_array(int *array, size_t size)
{
	unsigned int element, element_temp;

	for (element = 0; element < size; element++)
	{
		if ((element + 1) < size)
		{
			if (array[element] > array[element + 1])
			{
				element_temp = array[element];
				array[element] = array[element + 1];
				array[element + 1] = element_temp;
				print_array(array, size);
			}
		}
	}
}
