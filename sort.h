#ifndef BIG_POO
#define BIG_POO

#include <stdio.h>
#include <stdlib.h>


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


/* Given funcs to print arrays and lists */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sort prototypes */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void lomutorules(int *array, size_t size, unsigned int low, unsigned int high);

#endif
