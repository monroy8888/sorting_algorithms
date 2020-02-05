#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order.
 *
 * @array: Pointer - Array.
 * @size: Size array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int stop = 0, temporal = 0;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				stop++;
				temporal = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temporal;
				print_array(array, size);
			}
		}
		if (stop == 0)
			break;
	}
}