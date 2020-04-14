#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: the array to be searched
 * @size: the length of the array
 * @value: the value to be searched
 *
 * Return: the index of the value in the array. Otherwise the array
 * is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int lower_bound = 0;
	int top_bound = (int)size - 1;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	return (find_binary_search(array, lower_bound, top_bound, value));
}

/**
 * find_binary_search - finds the values in the left and right parts
 * of the array
 * @array: the array to be searched
 * @left: the left side of the array
 * @right: the right side of the array
 * @i: the value
 *
 * Return: the binary search values if otherwise, -1
 */
int find_binary_search(int *array, int left, int right, int i)
{
	if (left <= right)
	{
		int mid = left + (right - left) / 2;

		print_array(array, left, right);

		if (array[mid] == i)
			return (mid);
		if (array[mid] > i)
			return (find_binary_search(array, left, mid - 1, i));
		return (find_binary_search(array, mid + 1, right, i));
	}

	return (-1);
}

/**
 * print_array - prints the array
 * @array: the array
 * @left: the left part of the array
 * @right: the right side of the array
 */
void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");

	for (; left < right; left += 1)
	{
		printf("%d, ", array[left]);
	}

	printf("%d\n", array[right]);
}
