#include "sort.h"

int check_if_list_sorted(listint_t *list);
void insertion_sort_list_2(listint_t *list);
void swap_list_node(listint_t *node, listint_t *list);

/**
 * insertion_sort_list - functions checks if list is sorted, if not it calls
 * insertion_sort_list_2 so it can sort the list using insertion
 * @list: head of list that needs to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	int stop = 0;
	int count = 0;

	while (stop == 0)
	{
		stop = check_if_list_sorted(*list);
		if (stop == 0)
			insertion_sort_list_2(*list);

		if (count > 10)
			break;
		count++;
	}
}

/**
 * check_if_list_sorted - function checks if list is sorted
 * @list: linked list to be checked
 * Return: 1 if sorted, 0 if not
 */
int check_if_list_sorted(listint_t *list)
{
	listint_t *head = list, *next_node = list->next;

	while(head->next)
	{
		if (head->n > next_node->n)
			return (0);

		head = head->next;
		next_node = head->next;
	}
	return (1);
}

/**
 * insertion_sort_list2 - function sorts linked list using insertion method
 * @list: linked list passed to function
 */
void insertion_sort_list_2(listint_t *list)
{
	listint_t *head = list, *node = list->next;
	int index = 0;

	while(head->next)
	{
		if (head->n > node->n)
		{
			printf("n:<%i> node:<%i>\n", head->n, node->n);
			swap_list_node(node, list);
		}
		head = head->next;
		node = head->next;

		if (index > 2)
			break;
		index++;
	}
}

/**
 * swap_list_node - function swaps two nodes in a linked list
 * @node: node to be swapped
 */
void swap_list_node(listint_t *node, listint_t *list)
{
	int temp_number;
	int counter = 0;

	while (node->prev)
	{
		if (node->n < node->prev->n)
		{
			printf("SWAP: n: <%i> prev: <%i>\n", node->n, node->prev->n);
			temp_number = node->prev->n;
			node->prev->n = node->n;
			node->n = temp_number;
			print_list(list);
		}
		node = node->prev;

		if (counter > 5)
			break;
		counter++;
	}
}
