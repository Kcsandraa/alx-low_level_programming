#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: prints the result of the operation,
 */
int main(int argc, char *argv[])
{
	char *c;
	int i, j, result;
	int (*fun)(int, int);

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	c = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		_Exit(98);
	}

	fun = get_op_func(c);
	if (fun == NULL)
	{
		printf("Error\n");
		_Exit(99);
	}

	result = fun(i, j);
	printf("%d\n", result);

	return (0);
}
