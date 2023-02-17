#ifndef SORT_H
#define SORT_H

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

/* T1 tasks */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int list_len(listint_t *h);
void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int l, int r);
void lomuto_sort(int *array, size_t size, int l, int r);

/* T3 tasks */
void swap(int *a, int *b);
void heapify(int *arr, int size_int, int i, size_t size);
void heap_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void print_da_array(int *array, int start, int end);
void copy_array(int *array, int start, int end, int *tmp_arr);
void recur_split(int *tmp_arr, int start, int end, int *array);
void merge_it(int *array, int start, int mid, int end, int *tmp_arr);
void radix_sort(int *array, size_t size);
void counting_sort(int *array, size_t size, int *output, int place);

#endif
