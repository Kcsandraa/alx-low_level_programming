#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}

/**
 * op_sub - subtracts two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}

/**
 * op_mul - multiplys two integers
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}

/**
 * op_div - divides two intergers
 * @a: first integer
 * @b: second integer
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	int c;

	if (b == 0)
	{
		printf("Error\n");
		_Exit(100);
	}

	c = a / b;
	return (c);
}

/**
 * op_mod - finds remainder of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	int c;

	if (b == 0)
	{
		printf("Error\n");
		_Exit(100);
	}

	c = a % b;
	return (c);
}
