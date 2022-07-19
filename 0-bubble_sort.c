#include "sort.h"

/**
 *bubble_sort - Bubble sorting function.
 *@array: pointer to array of unsorted strings.
 *@size: Arrays size
 */

void bubble_sort(int *array, size_t size)
{
	int m = 0, flag;
	size_t j = 0, i = 0;

	for (j = 0; j < size; j++)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				m = array[i + 1];
				array[i + 1] = array[i];
				array[i] = m;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
