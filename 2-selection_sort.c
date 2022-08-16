#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the selection sort algorithm
 * @array: array of integers
 * @size: number of elements in the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t  i;
	size_t checkyboi;
	size_t switcheroo;
	size_t littleguy;

	for (i = 0; i < (size - 1); i++)
	{
		littleguy = i;
		for (checkyboi = i + 1; checkyboi < size; checkyboi++)
		{
			if (array[checkyboi] < array[littleguy])
			{
				littleguy = checkyboi;
			}
		}
		if (littleguy != i)
		{
			/* do the ol' switcheroo */
			switcheroo = array[i];
			array[i] = array[littleguy];
			array[littleguy] = switcheroo;
			print_array(array, size);
		}
	}
}
