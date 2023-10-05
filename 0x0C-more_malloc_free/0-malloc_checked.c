#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory using malloc
 * @b: The parameter
 * Return:  a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void  *m;

	m = malloc(b);
	if (m == NULL)
	{
		_Exit(98);
	}
	return (m);
}
