#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @int_array: array of integers
 * @arr_size: size of array
 * @cmp_ptr: pointer to the function to be used to compare values
 * Return: index where match is found or -1 if fails
 */

int int_index(int *int_array, int arr_size, int (*cmp_ptr)(int))
{
	int i;

	if (int_array != NULL && cmp_ptr != NULL && arr_size > 0)
		for (i = 0; i < arr_size; i++)
			if (cmp_ptr(int_array[i]))
				return (i);
	return (-1);
}
