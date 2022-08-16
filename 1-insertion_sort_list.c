#include "sort.h"

/**
 * swap - swaps two consecutive nodes in a linked list
 *
 * @ptr: pointer to first node to be swapped
 */

void swap(listint_t **ptr)
{
	listint_t *a = (*ptr);
	listint_t *b = (*ptr)->next;

	if (a->prev == NULL)
	{
		a->next = b->next;
		b->prev = a->prev;
		b->next = a;
		a->prev = b;
		a->next->prev = a;
	}
	else
	{
		a->next = b->next;
		b->prev = a->prev;
		b->prev->next = b;
		a->prev = b;
		b->next = a;
		a->next->prev = a;
	}
}


/**
 * insertion_sort_list - sorts a linked list
 *
 * @list: list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
        listint_t *node = *list, *rev_node;

	if (node == NULL)
		return;
	for (; node->next != NULL; node = node->next)
	{
		if (node->n > node->next->n)
		{
			swap(&node);
			print_list(*list);
			rev_node = node->prev;

			for (; rev_node != NULL; rev_node = rev_node->prev)
			{
				if (rev_node->n > rev_node->next->n)
				{
					swap(&rev_node);
					print_list(*list);
				}
				else
					break;
			}
		}
	}
}
