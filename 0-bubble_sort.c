#include "sort.h"

/**
 * bubble_sort - sorting function
 * @array: - given array
 * @size: - size of array
 *
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j, buff;

for (j = 1; j < size; j++)
{
for (i = 0; i < size - j; i++)
{
if (array[i] > array[i + 1])
{
buff = array[i];
array[i] = array[i + 1];
array[i + 1] = buff;
print_array(array, size);
}
}
}
}
