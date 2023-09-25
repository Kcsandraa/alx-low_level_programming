#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to n
 * @b: constant byte
 * @n: first n bytes of the memory
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i  = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}

	return s;
}
