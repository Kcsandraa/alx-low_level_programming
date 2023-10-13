#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: total parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	int l;
	va_list args;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		l = va_arg(args, int);
		sum += l;
	}
	return (sum);
}
