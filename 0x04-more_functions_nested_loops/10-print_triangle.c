#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, sp;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (sp = i; sp <  i; sp++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
