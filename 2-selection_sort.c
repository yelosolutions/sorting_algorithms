#include "sort.h"
/**
 * selection_sort - Selection sort algorithm.
 *@array: Array of integers.
 *@size: Size of array.
 */
void selection_sort(int *array, size_t size)
{
	int n = 0, o = 0, flag = 0;
	size_t i, j;

	for (i = 0 ; i < size ; i++)
	{
		flag = 0;
		n = array[i];
		for (j = i; j < size ; j++)
		{
			if (n > array[j])
			{
				n = array[j];
				o = j;
				flag = 1;
			}
		}
		if (flag == 1)
		{
		array[o] = array[i];
		array[i] = n;
		print_array(array, size);
		}
	}
}
