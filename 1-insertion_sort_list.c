#include "sort.h"
/**
 * swap - swaps two adjacent elements of a listint_t list
 * @head: pointer to head
 * @node1: pointer to first adjacent node
 * @node2: pointer to second adjacent node
 */

void swap(listint_t **head, listint_t **node1, listint_t **node2)
{
	listint_t *previous = NULL, *next = NULL;
	listint_t *a = *node1, *b = *node2;

	if (a->prev)
	{
		previous = a->prev;
		previous->next = b;
	}
	b->prev = previous;
	if (b->next)
	{
		next = b->next;
		next->prev = a;
	}
	a->next = next;
	b->next = a;
	a->prev = b;

	if (*head == a)
		*head = b;
}


/**
 * insertion_sort_list - sorts a listint_t list using insertion sort
 * @list: pointer to head of list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i;
	listint_t *rev;

	if (!list)
	{
		return;
	}

	i = *list;

	while (i->next)
	{
		if (i->next != NULL && i->n > i->next->n)
		{
			swap(list, &i, &(i->next));
			print_list(*list);
			rev = i->prev;
			while (rev->prev != NULL && rev->n < rev->prev->n)
			{
				swap(list, &(rev->prev), &(rev));
				print_list(*list);
			}

		}
		if (i->next != NULL && i->n <= i->next->n)
		{
			i = i->next;
		}
	}
}
