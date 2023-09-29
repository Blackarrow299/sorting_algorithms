#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble Sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Number of elements in the array.
 *
 * Return: None (void).
 */

void bubble_sort(int *array, size_t size)
{
	size_t length = size;
	int tmp;

	while (length > 1)
	{
		size_t i = 0;

		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
			tmp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = tmp;
			print_array(array, size);
			}
		}
		length--;
	}
}
