#include "sort.h"

/**
 * quick_swap - swap function
 * @a: item a
 * @b: item b
 */
void quick_swap(int a, int b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}
/**
 * partition - partitions array into 2 sections based on our selected pivot
 * @array: array to be partitioned
 * @first: beginning of our array
 * @last: last index in our larger partition area (not the pivot)
 * @size: size of array | index of pivot
 * Return: return index of our partition
 */
int partition(int *array, int first, int last, size_t size)
{
	int idx1 = first - 1, idx2;
	int pivot = array[last];
	
	for (idx2 = first; idx2 <= last - 1; idx2++)
	{
		if (array[idx2] < pivot)
		{
			idx1++;
			quick_swap(array[idx1], array[idx2]);
			print_array(array, size);
		}
	}
	quick_swap(array[idx1 + 1], array[last]);
	print_array(array, size);
	return (idx1 + 1);
}
/**
 * _quick_sort - recursive quick sort function with parameters to better
 * suit partition function
 * @array: array to quick sort
 * @first: beginning of our array
 * @last: last index of our partition area
 * @size: size of array
 */
void _quick_sort(int *array, int first, int last, size_t size)
{
	int part;

	if (first < last)
	{
		part = partition(array, first, last, size);

		_quick_sort(array, first, part - 1, size);
		_quick_sort(array, part + 1, last, size);
	}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick Sort algorithm (Lomuto partition scheme)
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	_quick_sort(array, 0, size - 1, size);
}
