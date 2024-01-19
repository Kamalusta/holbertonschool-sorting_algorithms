#include "sort.h"
int partition(int *array, size_t low, size_t hig);
void swap(int *a, int *b);
void sort(int *array, int low, int hig);

/**
 * quick_sort - sorter function
 * @array: - sorted array
 * @size: - size of array
 *
 * Return: Always 0
 */
void quick_sort(int *array, size_t size)
{
sort(array, 0, size - 1);
}
/**
 * partition - sorter function
 * @array: - sorted array
 * @low: - sorted array
 * @hig: - size of array
 *
 * Return: int
 */
int partition(int *array, size_t low, size_t hig)
{
	size_t j, i = (low - 1);
	int pivot = array[hig];

	for (j = low; j < hig; j++)
		{
			if (array[j] <= pivot)
			{
				i++;
				swap(&array[i], &array[j]);
			}
		}
	swap(&array[hig], &array[i + 1]);
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
void sort(int *array, int low, int hig)
{
	if (low < hig)
		{
			int pivo = partition(array, low, hig);

			sort(array, low, (pivo - 1));
			sort(array, (pivo + 1), hig);
		}
}
