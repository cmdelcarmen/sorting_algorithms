#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*file name: 0-bubble_sort.c*/
void bubble_sort(int *array, size_t size);
void bubble_sort_array(int *array, size_t size);
int check_if_sorted(int *array, size_t size);

/*fie name: 1-insertion_sort_list.c*/
void insertion_sort_list(listint_t **list);

/*file name: 2-selection_sort.c*/
void selection_sort(int *array, size_t size);
void selection_sort_array(int *array, size_t size);


#endif
