#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: The array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array == NULL || cmp == NULL)
		{
			return (-1);
		}
		else if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
