#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - bubble sort
 * @array: array of integers
 * @size: size of the array
 *
 * Description: bubble sort algorithm for an integer array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	int i = 0;
	int temp;

	if (!array)
		return;

	while (swapped == 1)
	{
		swapped = 0;
		for (i = 1; i < (int)size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
