#include "sort.h"

 /**
  * quick_sort - sorts quickly (i know, its a tough one)
  *
  * @array: pointer to the array
  * @size: how many elements in the array
  */

void quick_sort(int *array, size_t size)
{
	unsigned int low = 0;
	unsigned int high = (size - 1);

	if (array == NULL || size < 2)
		return;
	lomutorules(array, size, low, high);
}

/**
 * lomutorules - recurse using lomuto partitioning
 * @array: array
 * @low: left part of sub array
 * @high: right part of sub array
 * @size: size of the array
 * Return: void
 */
void lomutorules(int *array, size_t size, unsigned int low, unsigned int high)
{
	unsigned int i, j;
	int pivot;
	int llcoolint;

	if (low >= high)
		return;

	pivot = array[high];
	j = low;

	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			if (i != j)
			{
				llcoolint = array[i];
				array[i] = array[j];
				array[j] = llcoolint;
				print_array(array, size);
			}
			j++;
		}
	}
	if (j != high)
	{
		llcoolint = array[high];
		array[high] = array[j];
		array[j] = llcoolint;
		print_array(array, size);
	}
	if (j != 0)
		lomutorules(array, size, low, j - 1);
	if (j + 1 <= size - 1)
		lomutorules(array, size, j + 1, high);
}
