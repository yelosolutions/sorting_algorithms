#include "sort.h"
/**
 * insertion_sort_list - Insertion sort algorithm for listint_t.
 *@list: Header.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *aux_current;

	if (!list || !*list)
		return;
	current = (*list)->next;

	while (current)
	{
		aux_current = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next)
			current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->prev->prev;
			if (current->prev)
				current->prev->next = current;
			current->next->prev = current;
			if (!current->prev)
				*list = current;
			print_list(*list);
		}
		current = aux_current;
	}
}
