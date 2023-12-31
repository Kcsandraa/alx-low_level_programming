#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars,
 *  and initializes it with a specific char
 *  @size: size of memory to print
 *  @c: The specific char
 *  Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
