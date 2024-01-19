#include "sort.h"
int partition(int *arr, size_t low, size_t hig, int size);
void swap(int *a, int *b);
void sort(int *array, int low, int hig, int size);

/**
 * quick_sort - sorter function
 * @array: - sorted array
 * @size: - size of array
 *
 * Return: Always 0
 */
void quick_sort(int *array, size_t size)
{
  sort(array, 0, size - 1, size);
}
/**
 * partition - sorter function
 * @array: - sorted array
 * @low: - sorted array
 * @hig: - size of array
 *
 * Return: int
 */
int partition(int *arr, size_t low, size_t hig, int size)
{
	size_t j, i = (low - 1);
	int pivot = arr[hig];
	
	for (j = low; j < hig; j++)
		{
			if (arr[j] <= pivot)
			{
				i++;
				if (i != j)
				{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
				}
			}
		}
	if (hig != i+1)
	{
	swap(&arr[hig], &arr[i + 1]);
	print_array(arr, size);
	}
	return (i + 1);
}

/**
 * swap - sorter function
 * @b: - sorted array
 * @a: - size of array
 *
 * Return: int
 */
void swap(int *a, int *b)
{
	int buff = *a;
	*a = *b;
	*b = buff;
}

/**
 * sort - sorter function
 * @array: - sorted array
 * @low: - sorted array
 * @hig: - size of array
 *
 * Return: int
 */
void sort(int *array, int low, int hig, int size)
{
	if (low < hig)
		{
		  int pivo = partition(array, low, hig, size);

		  sort(array, low, (pivo - 1), size);
		  sort(array, (pivo + 1), hig, size);
		}
}
